#include <stdio.h>
#include <stdlib.h> //atoi, atof
#include <stdbool.h>



#define TAN 10 //macro

int lista[TAN] = { 15, 20, 21, 40, 50 , 33 ,60 ,70 ,80, 100 };
int idx  = 0;



typedef int integer; //typedef permite cambiarle el nombre a un type, en este caso al type int

int main(int argc, char** argv) {

    int index2 = 0;
    for( int index = 0; index < TAN ; index++ , index2++ ){

        printf( " index: %d, Value: %d.\n\a", index, lista[index] );

        for (size_t i =0; i <3; i++)
        {
             printf("hola mundo!!!\n");
        }
    }
    return 0;
}