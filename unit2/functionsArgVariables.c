#include <stdio.h>

#include <stdlib.h>

int var1 = 10;
int var2 = 20;


#include "./utils.h"

int main (int argc, char** argv){
    printf( "Just main: var1= %d, var2= %d\n", var1, var2);
    printf("Function was executed: \n");
    //Paso de argumentos por direccion//
    modifyVariables(var1, var2 );

    printf( "var1: %d, var2: %d\n", var1, var2);

    //Get the adress of var1 and var2
    // % = "La direccion de" ---> &x0079fb

    int * myptr1 = &var1;
    int * myptr2 = &var2;

    printf( "adress var1: %p, \t adress var2: %p\n", &var1, &var2 );
    // *myptr1 = "El valor de" --> &x00879fb = x;
    myptr1 = &var1;
    *myptr1 = 20;
    var2 = 40;

    int** ptrDouble = &myptr1;
    **ptrDouble;
    

    printf("var1 = %d, var2 = %d\n", var1 , var2);

    showIntadress ( myptr1);
    showIntadress ( myptr2 );

    printf ("Pointer has modificated the var1: \n");

    printf("///////////////////////////Pointers into functions///\n");

    printf("var1= %d, var2 = %d\n", var1, var2);
    printf("Function adress was executed:\n");
    //Paso de argumentos por direccion//
    modifyVariablesAdress( &var1, &var2, 3 );
    //Decodificado humano: modifyVariablesAdress (&var1, &var2);
    printf("var1= %d, var2= %d \n", var1, var2);
    //Dentro del codigo debe ir algo asi:
        // *0x7f2044a01018 = 100;

    swap(&var1, &var2);
    swapGlobal();
    printf( "myVar1 = %d, myVar2= %d\n", myVar1, myVar2);

    return 0;
}