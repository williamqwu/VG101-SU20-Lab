/*
 * Sample Code for Lab 9 ex1
 * Written by William Wu
 * This exercise is a little bit annoying, but if you realize its implementation by yourself, you should
 * be capable of solving any other similar tasks.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 51
#define MAXM 1001

// EFFECTS: return 0 if str1 and str2 doesn't match; return 1 otherwise
int isKeyMatch(const char * str1, const char * str2, int start, int keyLength){
    for(int i=0;i<keyLength;i++){
        if(str1[i]!=str2[start+i]) return 0;
    }
    return 1;
}

// EFFECTS: return 1 if the character is an alphabet, 0 otherwise
int isAlpha(char ch){
    return ((ch>=65&&ch<=90)||(ch>=97&&ch<=122)) ? 1 : 0;
}

int main(){
    char str[MAXN][MAXM];
    int rowCount = 0, occurCount = 0;

    // NOTE: JOJ doesn't accept gets, but fgets is acceptable.
    // NOTE: when fgets read an EOF (end of file), it will return NULL
    // NOTE: for entering EOF in the terminal, you may try Ctrl+Z or Ctrl+D. However, for Clion users, some bugs may exist.
    // To avoid some strange issues, you are suggested to use cmd / powershell and take advantage of "I/O Redirection".
    // For example, you may try the command "ex1.exe < in.txt", where in.txt is a testcase (input).
    // In that sense, you may test your code efficiently without modifying your code.
    while(fgets(str[rowCount],1024,stdin)!=NULL){
        rowCount++;
    }
    int keyLength = strlen(str[rowCount-1]);
    // NOTE: in the testcase on JOJ, the last line doesn't include a Line Feed (i.e., '\n').
    // However, you should take it into consideration.    
    if (str[rowCount-1][keyLength-1] == '\n') keyLength--;

    for(int row=0; row<rowCount-1; row++){
        // NOTE: for mid2, we won't treat every warning as error when compiling your code (unlike hw and lab).
        for(int col=0; col<(int)strlen(str[row]);){
            int isSolo = 0, wordLength = 0;
            // NOTE: get the word count of str[row][col]
            for(int k=0;col+k<(int)strlen(str[row]);k++) if(!isAlpha(str[row][col+k])) {wordLength=k; break;}
            // NOTE: see whether the word is not attached with other characters.
            if (!isAlpha(str[row][col+keyLength])) isSolo=1;
            if (isKeyMatch(str[rowCount-1],str[row],col,keyLength) && isSolo) {occurCount++;/*printf("[%d][%d]\n",row,col);*/}
            col+=(wordLength+1);
        }
    }
    printf("%d\n",occurCount);

    return 0;
}
