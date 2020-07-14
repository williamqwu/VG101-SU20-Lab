/*
 * VG101 Lab 6, SU2020
 * Written by William Wu
 * Latest Update: June.18, 2020
 */

/* Header files and constants:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Representation for different kinds of cell
#define BLOCK 1
#define PASS 0
#define INV 2
#define EVA 3
#define DEP 4
#define HTP 5

// Representation for directions
#define UP 0
#define LF 1
#define DW 2
#define RT 3

#define L 1
#define D 2
#define R 3
#define U 4

// Standard length of the map along x-axis
#define MAP_LENGTH_X 14

// Standard length of the map along y-axis
#define MAP_LENGTH_Y 18

// Number of Heat Pumps in total
#define NUM_P 10

// Number of Deploy Points in total
#define NUM_Q 10

// Health of an enemy
const double H_ENEMY = 2000.0;

// Damage ratio of a "HeatPump"
const double D_RATIO_HP = 0.95;

// Damage value of an operator
const double D_VALUE_OP = 300.0;

// For simplicity, we define the map array globally:
int arkMap[MAP_LENGTH_X][MAP_LENGTH_Y];
// int maze[14][18];
/* Define your function prototypes here: */

void mapGenerator();
void plainMapGen(int x, int y, int dir);
void randomShuffle(int rn[4][3]);
int inBounds(int x, int y);
void mapDebugger();
void mapPrinter();
void helpPrinter();
void errorPrinter();
void randomMaze(int x, int y, int dir);
// more functions assigned in Lab 7

int main(int argc, char *argv[]){
    /* Initialization*/
    
    srand((int)time(0));
    memset(arkMap,0,sizeof(arkMap));

    /* TO-DO: Process program arguments here: */
    int isGen=0, isDebug=0;
    if(argc<=1){
        errorPrinter();
        helpPrinter();
        return 0;
    }
    for(int i=1;i<argc;i++){
        if (argv[i][0]=='-'&&argv[i][2]=='h') {errorPrinter();helpPrinter();return 0;}
        else if (argv[i][0]=='-'&&argv[i][2]=='g') isGen=1;
        else if (argv[i][0]=='-'&&argv[i][2]=='d') isDebug=1;
        else {helpPrinter();return 0;}
    }
    if(!isGen&&isDebug){helpPrinter();return 0;}
    if(isGen) mapGenerator();
    if(isDebug) mapDebugger();

    return 0;
}
void errorPrinter(){
    printf("Invalid program argument!\n");
}
void helpPrinter(){
    printf("Use --help to generate a help message.\nUse --gen to generate a valid Arknights map in ASCII.\nUse --debug to enter debugger mode when --gen is called.\n");
}
void mapGenerator(){
    // EFFECTS: randomly generate an Arknights map with 
    // an Entry point, an Evacuation point, p Heatpumps 
    // and q Operators
    // MODIFIES: arkMap

    // TO-DO: Step 1: Initialize arkMap
    for(int i=0;i<MAP_LENGTH_X;i++) for(int j=0;j<MAP_LENGTH_Y;j++) arkMap[i][j]=PASS;
    for(int i=0;i<MAP_LENGTH_Y;i++) {arkMap[0][i]=BLOCK; arkMap[MAP_LENGTH_X-1][i]=BLOCK;}
    for(int i=0;i<MAP_LENGTH_X;i++) {arkMap[i][0]=BLOCK; arkMap[i][MAP_LENGTH_Y-1]=BLOCK;}

    // TO-DO: Step 2: use the function skeleton provided to fill in Blocks
    // randomMaze(6,9,LF);
    plainMapGen(MAP_LENGTH_X/2,MAP_LENGTH_Y/2,UP);

    // TO-DO: Step 3: specify other special cells on arkMap  
    arkMap[1][MAP_LENGTH_Y-1]=INV;
    for(int i=0;i<MAP_LENGTH_Y;i++) if(arkMap[MAP_LENGTH_X-3][i]==PASS){arkMap[MAP_LENGTH_X-3][i]=EVA;break;}


    // Let's see what we've generated!
    mapPrinter();
}

void plainMapGen(int x, int y, int dir){
    // EFFECTS: randomly generate an Arknights map with
    // blocks and passages recursively
    // MODIFIES: arkMap

    // x, y denotes the coordinate of the current location;
    // dir denotes the direction of the extension of blocks
    mapPrinter();
    int rn[4][3] = {
        {x-2,y,LF},
        {x+2,y,RT},
        {x,y+2,UP},
        {x,y-2,DW}
    };
    randomShuffle(rn); // TO-DO: shuffle rn[0],rn[1],rn[2] and rn[3]
    for(int cn=0;cn<4;cn++) {
        if(inBounds(rn[cn][0],rn[cn][1]) && (arkMap[rn[cn][1]][rn[cn][0]]==PASS)) {
            printf("%d %d %d %d\n",rn[cn][0],rn[cn][1],inBounds(rn[cn][0],rn[cn][1]),arkMap[rn[cn][0]][rn[cn][1]]);
            if(rn[cn][2]==LF)
                arkMap[rn[cn][1]][rn[cn][0]+1] = BLOCK;
            else if(rn[cn][2]==RT)
                arkMap[rn[cn][1]][rn[cn][0]-1] = BLOCK;
            else if(rn[cn][2]==UP)
                arkMap[rn[cn][1]-1][rn[cn][0]] = BLOCK;
            else if(rn[cn][2]==DW)
                arkMap[rn[cn][1]+1][rn[cn][0]] = BLOCK;

            arkMap[rn[cn][1]][rn[cn][0]] = BLOCK;
            plainMapGen(rn[cn][0],rn[cn][1],rn[cn][2]);
        }
    }
}

void randomShuffle(int rn[4][3]){
    // EFFECTS: shuffle the array
    int perm[24][4]={
        {0,1,2,3},{0,1,3,2},{0,2,1,3},{0,2,3,1},{0,3,1,2},{0,3,2,1},
        {1,0,2,3},{1,0,3,2},{1,2,0,3},{1,2,3,0},{1,3,0,2},{1,3,2,0},
        {2,0,1,3},{2,0,3,1},{2,1,0,3},{2,1,3,0},{2,3,0,1},{2,3,1,0},
        {3,0,1,2},{3,0,2,1},{3,1,0,2},{3,1,2,0},{3,2,0,1},{3,2,1,0}
    };
    int b[4][3];
    for(int i=0;i<4;i++) for(int j=0;j<3;j++) b[i][j]=rn[i][j];
    // memcpy(b[0],rn,sizeof(int)*4*3);
    int p = rand()%24;
    for(int i=0;i<4;i++){
        memcpy(rn[i],b[perm[p][i]],sizeof(int)*3);
    }
}

int inBounds(int x, int y){
    // EFFECTS: return 1 if the cell (x,y) is inside the border;
    // return 0 otherwise.
    // NOTES: the border has already been generated in Step 1.
    // Take that into account.
    return ( x>=1 && x<17 && y>=1 && y<13 ) ? 1 : 0;
}

void mapDebugger(){
    // EFFECTS: take in a user input as the movement 
    // direction, update the location of the enemy
    // (starting at the INVASION POINT), and print
    // the map.

    printf(
        "*** Usage: ***\n"
        "w for Upwards, a for Leftwards, s for Downwards, and d for Rightwards.\n"
        "z for Exit, and any other input should be ignored.\n"
        "- - - - - - - - - - - - -\n"
        );
    // TO-DO: Initialization

    char keyInput;
    while(scanf("%c",&keyInput)==1){
        switch (keyInput)
        {
        case 'w':
            // TO-DO: Update the map
            break;
        case 'a':
            // TO-DO: Update the map
            break;
        case 's':
            // TO-DO: Update the map
            break;
        case 'd':
            // TO-DO: Update the map
            break;
        case 'z':
            return;
        default:
            continue;
        }
        mapPrinter();

        // TO-DO: calculate the current Health Point of the enemy
        // and print that information; you may define helper
        // functions by yourself.

    }
}

void mapPrinter(){
    // EFFECTS: print the current map with ASCII characters

    for(int i=0;i<MAP_LENGTH_X;printf("\n"),i++) for(int j=0;j<MAP_LENGTH_Y;j++){
        switch (arkMap[i][j])
        {
        case BLOCK:
            printf("#");
            break;
        case PASS:
            printf(" ");
            break;
        case INV:
            printf("I");
            break;
        case EVA:
            printf("E");
            break;
        case DEP:
            printf("o");
            break;
        case HTP:
            printf("X");
            break;        
        default:
            break;
        }
    }
}