#include <stdio.h>
#include <stdlib.h> //atoi, atof
#include <stdbool.h>



#define TAN 10 //macro

int lista[TAN] = { 15, 20, 21, 40, 50 , 33 ,60 ,70 ,80, 100 };
int idx  = 0;

int main(int argc, char** argv) {

    int index2 = 0;
    for( int index = 1; index <= TAN ; index++ , index2++ ){
        printf( " index: %d, Value: %d.\n\a", index, lista[index] );
    }

    while ( true ) 
    {
        if ( lista[idx]==50 ){  //if es un bloque de control, no un bucle
            break;
        }
        idx++;             
    }
    printf("idx found: %d", idx );

    int idx_for = 0;
    for ( ; lista[idx_for] !=50; idx_for++  ) {}
    printf( " idx_for found: %d", idx_for  );

    
    
    // otra forma de hacerlo-------------------------------------
    //while (  lista[idx] !=50   ) 
    //{

    //    idx++;             
    //}
    //printf("idx found: %d", idx );

    return 0;
}