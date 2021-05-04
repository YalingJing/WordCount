#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define N 1024
int flag = 0;                       
int r[2] = {0};

void *ReadChar(char* fileName);
void *ReadWord(char* fileName);
void Test(int argc,char* argv[]);   
void WordCount(int argc,char* argv[]); 
int *GetOptions(int argc,char* argv[]);      
