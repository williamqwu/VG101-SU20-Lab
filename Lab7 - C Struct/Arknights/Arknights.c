/*
 * VG101 Lab 6 & Lab 7, SU2020
 * Written by William Wu
 * Latest Update: June.28, 2020
 */

#include "arkMap.h"

int main(int argc, char *argv[]){
    /* Initialization*/
    srand((int)time(0)); // set random seed
    PRTS *server = (PRTS *)calloc(1,sizeof(PRTS));
    server->enemyNum=1;
    server->enemy = (Enemy *)calloc(server->enemyNum,sizeof(Enemy));
    server->heatpumpNum=3;
    server->operatorNum=7;
    server->debugStatus=0;
    
    /* Lab6: Process program arguments */
    int isGen=0, isDebug=0, isSearch=0;
    if(argc<=1){
        errorPrinter();
        helpPrinter();
        return 0;
    }
    for(int i=1;i<argc;i++){
        if (argv[i][0]=='-'&&argv[i][2]=='h') {helpPrinter();return 0;}
        else if (argv[i][0]=='-'&&argv[i][2]=='g') isGen=1;
        else if (argv[i][0]=='-'&&argv[i][2]=='d') isDebug=1;
        else if (argv[i][0]=='-'&&argv[i][2]=='s') isSearch=1;
        else {errorPrinter();helpPrinter();return 0;}
    }

    if(!isGen&&isDebug){helpPrinter();return 0;}
    if(isGen) mapGenerator(server);
    if(isSearch) mapSearcher(server);
    if(isDebug) mapDebuggerStarter(server);

    /* Closing */
    free(server->enemy);
    free(server);
    return 0;
}