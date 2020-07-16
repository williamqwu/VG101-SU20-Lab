/*
 * VG101 Lab 6 & Lab 7, SU2020
 * Written by William Wu
 * Latest Update: July.10, 2020
 */

#include "arkMap.h"
// Health of an enemy
const double H_ENEMY = 2000.0;

// Damage ratio of a "HeatPump"
const double D_RATIO_HP = 0.95;

// Damage value of an operator
const double D_VALUE_OP = 300.0;

// For simplicity, we define the map array globally:
int arkMap[MAP_LENGTH_X][MAP_LENGTH_Y];

void mapGenerator(PRTS* server){
    // Lab6: Step 1: Initialize arkMap
    for(int i=0;i<MAP_LENGTH_X;i++) for(int j=0;j<MAP_LENGTH_Y;j++) arkMap[i][j]=PASS; // assign passages
    for(int i=0;i<MAP_LENGTH_Y;i++) {arkMap[0][i]=BLOCK; arkMap[MAP_LENGTH_X-1][i]=BLOCK;}
    for(int i=0;i<MAP_LENGTH_X;i++) {arkMap[i][0]=BLOCK; arkMap[i][MAP_LENGTH_Y-1]=BLOCK;}

    // Lab6: Step 2: use the function skeleton provided to fill in Blocks
    plainMapGen(MAP_LENGTH_X/2,MAP_LENGTH_Y/2,UP); // assign blocks

    // Lab6: Step 3: specify other special cells on arkMap
    arkMap[1][MAP_LENGTH_Y-1]=INV; // assign the invasion point
    server->invX=1;
    server->invY=MAP_LENGTH_Y-1;
    int h=server->heatpumpNum, o=server->operatorNum, e=1;
    while(h>0||o>0||e>0){
        int posX=rand()%MAP_LENGTH_X, posY=rand()%MAP_LENGTH_Y;
        if(posX==0||posX==MAP_LENGTH_X||posY==0||posY==MAP_LENGTH_Y) continue;
        if(h>0&&arkMap[posX][posY]==PASS) {arkMap[posX][posY]=HTP;h--;} // assign heat pump
        else if(o>0&&arkMap[posX][posY]==BLOCK) {arkMap[posX][posY]=DEP;o--;} // assign operators
        else if(e>0&&arkMap[posX][posY]==PASS) {arkMap[posX][posY]=EVA;e--;} // assign evacuation point
    }

    // Let's see what we've generated!
    mapPrinter(server);
}

void plainMapGen(int x, int y, int dir){
    // x, y denotes the coordinate of the current location;
    // dir denotes the direction of the extension of blocks
    int rn[4][3] = {
        {x-2,y,LF},
        {x+2,y,RT},
        {x,y+2,UP},
        {x,y-2,DW}
    };
    randomShuffle(rn); // Lab6: shuffle rn[0],rn[1],rn[2] and rn[3]
    for(int cn=0;cn<4;cn++) {
        if(inBounds(rn[cn][0],rn[cn][1]) && (arkMap[rn[cn][1]][rn[cn][0]]==PASS)) {
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
    int perm[24][4]={
        {0,1,2,3},{0,1,3,2},{0,2,1,3},{0,2,3,1},{0,3,1,2},{0,3,2,1},
        {1,0,2,3},{1,0,3,2},{1,2,0,3},{1,2,3,0},{1,3,0,2},{1,3,2,0},
        {2,0,1,3},{2,0,3,1},{2,1,0,3},{2,1,3,0},{2,3,0,1},{2,3,1,0},
        {3,0,1,2},{3,0,2,1},{3,1,0,2},{3,1,2,0},{3,2,0,1},{3,2,1,0}
    };
    int b[4][3];
    memcpy(b[0],rn,sizeof(int)*4*3);
    int p = rand()%24;
    for(int i=0;i<4;i++){
        memcpy(rn[i],b[perm[p][i]],sizeof(int)*3);
    }
}

int inBounds(int x, int y){
    return ( x>=1 && x<MAP_LENGTH_X && y>=1 && y<MAP_LENGTH_Y ) ? 1 : 0;
}

void mapDebuggerStarter(PRTS* server){
    printf(
        "*** Entering debugging mode. ***\n"
        "optional arguments:\n"
        "\tw\tmove upwards\n"
        "\ta\tmove leftwards\n"
        "\ts\tmove downwards\n"
        "\td\tmove rightwards\n"
        "\tz\tquiz debugging\n"
        "- - - - - - - - - - - - -\n"
        );
    server->debugStatus=1;
    server->enemy[0].health=H_ENEMY;
    server->enemy[0].x=server->invX;
    server->enemy[0].y=server->invY;
    while(server->enemy[0].health>0 && server->debugStatus) mapDebugger(server);
}


void mapDebugger(PRTS* server){
    printf(
        "w for Upwards, a for Leftwards, s for Downwards, d for Rightwards, and z for Exit.\n"
        "- - - - - - - - - - - - -\n"
        );
    mapPrinter(server);

    char keyInput;
    scanf("%c",&keyInput);
    switch (keyInput)
    {
    case 'w':
        // TO-DO: update the coordinate of the enemy
        break;
    case 'a':
        // TO-DO: update the coordinate of the enemy
        break;
    case 's':
        // TO-DO: update the coordinate of the enemy
        break;
    case 'd':
        // TO-DO: update the coordinate of the enemy
        break;
    case 'z':
        server->debugStatus=0;
        return;
    default:
        printf("Invalid input!\n");
        return;
    }
    // TO-DO: update the health point of the enemy
    // NOTE: consider both the heat pump and the operators
}
void errorPrinter(){
    printf("Invalid program argument!\n");
}

void helpPrinter(){
    printf(
        "*** Welcome to Arknights. ***\n"
        "Usage: arknights [--help] [--gen] [--debug] \n"
        "- - - - - - - - - - - - -\n"
        "optional arguments:\n"
        "\t--help\t\tgenerate a help message\n"
        "\t--gen\t\tgenerate a valid Arknights map in ASCII\n"
        "\t--debug\t\tenter debugger mode when --gen is called\n");
}

void mapPrinter(PRTS* server){
    for(int i=0;i<MAP_LENGTH_X;printf("\n"),i++) for(int j=0;j<MAP_LENGTH_Y;j++){
        if(server->debugStatus && i==server->enemy[0].x && j==server->enemy[0].y) {printf("@"); continue;}
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

void mapSearcher(PRTS* server){
    // TO-DO: implement the function
}
