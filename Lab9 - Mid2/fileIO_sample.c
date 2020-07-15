/*
 * Sample code for Lab 9 FileIO
 */

#include <stdio.h>
#include <string.h>

#define MAX_FILENAME 256
#define MAX_ROW 201
#define MAX_COL 256

// EFFECTS: print the input inversely
void rec(FILE *fin, FILE *fout){
    char input[MAX_COL];
    if (fgets(input,100,fin)==NULL) return;
    rec(fin, fout); 
    fprintf(fout, "%s", input);
    // NOTE: if the file ends without a newline, we simply add one for it
    if(input[strlen(input)-1] != '\n') fprintf(fout, "\n");
}

// NOTE: reading the name of the input/output files from the program arguments
int main(int argc, char *argv[]){
    char in[MAX_FILENAME],out[MAX_FILENAME];
    // JOJ guarantees that argc=3
    strcpy(in,argv[argc-2]);
    strcpy(out,argv[argc-1]);

    // NOTE: opening files with file pointers
    FILE *fin, *fout;
    fin = fopen(in, "r");
    fout = fopen(out, "w");

    // NOTE: another way of opening files (file-reopening)
    // freopen(in,"r",stdin);
    // freopen(out,"w",stdout);
    
    /* Recursion Style */
    // rec(fin, fout); 

    /* Loop Style */
    char inputLoop[MAX_ROW][MAX_COL];
    int tmpIndex = 0;
    while(fgets(inputLoop[tmpIndex],MAX_COL,fin)!=NULL) {tmpIndex++;}
    for(int i=tmpIndex-1;i>=0;i--) { 
        fprintf(fout, "%s", inputLoop[i]);
        // NOTE: if the file ends without a newline, we simply add one for it
        if(inputLoop[i][strlen(inputLoop[i])-1] != '\n') fprintf(fout,"\n");
    }

    // NOTE: always remember to close the files
    fclose(fin);
    fclose(fout);
    return 0;
}
