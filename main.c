#include <stdio.h>
#include "input_output.h"
#include "swapper.h"
#include "matrix.h"

int main() {


    println("Hello. It`s a  user-friendly interface.");
    println("Enter a string : ");
    //REFERENCE TO JAVA
    int size = 12;

    //char word[size];
    char *buff = create_matrix_char(1024);
    getAWord(buff,1024);
    println("Operating ... ");

    int bytesOfWord = size*sizeof(char);
    printf("Bytes of input data : %iB",bytesOfWord);
    ln();
    printf("Size of input data : %i",size);
    ln();

    simpleSwap(buff,size);
    printlnC(buff,size);

    println("Clearing the memory...");
    delete_matrix_char(buff);
    println("Finishing...");

}
