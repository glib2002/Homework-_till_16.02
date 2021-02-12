//
// Created by 123 on 06.02.2021.
//

void simpleSwap(char *word, int size){
    if((size%2)==1){
        //непарний випадок

        for(int c = 0; c<=((size-1)/2)+1;c++){

            char buffer = word[c];
            char buffer_2 = word[size-1-c];
            // printf("%c %c\n ",buffer,buffer_2);
            if(c==(size-1-c)){
                continue;
                //Випадок для непарної середини.
            }
//            printf("Number %i, char1 %c, char2 %c ",c,word[c],word[size-1-c]);
//            ln();
            word[c]=buffer_2;
            word[size-1-c]=buffer;


        }
    }else {
        for (int c = 0; c < (size/ 2); c++) {

            char buffer = word[c];
            char buffer_2 = word[size-1-c];
            // printf("%c %c\n ",buffer,buffer_2);
//            printf("Number %i, char1 %c, char2 %c ",c,word[c],word[size-1-c]);
//            ln();
            word[c] = buffer_2;
            word[size-1 - c] = buffer;


        }
    }

}