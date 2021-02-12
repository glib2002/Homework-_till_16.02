
#include <stdio.h>



const int MAX_STRING_SIZE_KB = 1024;


void getAWord(char* word,int size){
    fgets(word, MAX_STRING_SIZE_KB, stdin);
}

void println(const char args_0[] ){
    puts(args_0);
    printf("%s","\n");
}

void ln(){
    printf("%s","\n");
}

void printlnC(char word[],int size){
    for(int x = 0;x<size;x++){
        printf("%c",word[x]);
    }
    ln();
}

