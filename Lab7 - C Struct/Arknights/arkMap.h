/*
 * VG101 Lab 6 & Lab 7, SU2020
 * Written by William Wu
 * Latest Update: June.28, 2020
 */

#ifndef ARKMAP_H // header guard
#define ARKMAP_H

/* Header files and constants:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Representation for different kinds of cell
#define PASS 0 
#define BLOCK 1
#define INV 2  // Invasion Point
#define EVA 3  // Evacuation Point
#define DEP 4  // Deploy Point
#define HTP 5  // Heat Pump

// Representation for directions
#define UP 0
#define LF 1
#define DW 2
#define RT 3

// Standard length of the map along x-axis
#define MAP_LENGTH_X 14

// Standard length of the map along y-axis
#define MAP_LENGTH_Y 18

// Number of max enemys in a map
#define MAX_ENEMY 25

// Number of Heat Pumps in total
#define NUM_P 10

// Number of Deploy Points in total
#define NUM_Q 10

typedef struct _Enemy{
    double health; // current health
    int x; // x coordinate
    int y; // y coordinate
}Enemy;

typedef struct _PRTS{
    int operatorNum; // number of operators
    int heatpumpNum; // number of heat pumps
    int enemyNum; // number of enemies
    Enemy *enemy; 
    int invX; 
    int invY;
    int debugStatus; 
}PRTS;

// For simplicity, we define the map array globally:
extern int arkMap[][MAP_LENGTH_Y];


/* Define your function prototypes here: */

// EFFECTS: randomly generate an Arknights map with 
// an Entry point, an Evacuation point, p Heatpumps 
// and q Operators
// MODIFIES: arkMap
void mapGenerator(PRTS* server);

// EFFECTS: randomly generate an Arknights map with
// blocks and passages recursively
// MODIFIES: arkMap
void plainMapGen(int x, int y, int dir);

// EFFECTS: shuffle the array
void randomShuffle(int rn[4][3]);

// EFFECTS: return 1 if the cell (x,y) is inside the border;
// return 0 otherwise.
// NOTES: the border has already been generated in Step 1.
// Take that into account.
int inBounds(int x, int y);

// EFFECTS: call mapDebugger
void mapDebuggerStarter(PRTS* server);

// EFFECTS: take in a user input as the movement 
// direction, update the location of the enemy
// (starting at the INVASION POINT), and print
// the map.
void mapDebugger(PRTS* server);

// EFFECTS: print the minimum step for the enemy to 
// move from the Invasion Point to the Evacuation Point.
void mapSearcher(PRTS* server);

/* printer functions */

// EFFECTS: print the current map with ASCII characters
void mapPrinter(PRTS* server);

// EFFECTS: print help prompt
void helpPrinter();

// EFFECTS: print error message
void errorPrinter();

#endif // !ARKMAP_H