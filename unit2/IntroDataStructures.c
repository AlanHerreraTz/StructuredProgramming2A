#include <stdio.h>
#include <string.h>


#include "./utils.h"

//arrays (arreglos)
int myIntArray[5];

int myInt = 3;
float myFloat = 3.1416; 


typedef struct mago{
    int vida;
    int mana;
    char* nombre;
    //mas atrubutos//
    //sayhello
    void (*saludo) (char message[]);
    int (*sumaDosnumeros) (int argumento1, int argumento2);
}Mago;

//typedef struct mago Mago;
int main (){

    Mago alan = {100, 100 , "ALan_Herrera"};
    struct mago emmanuel ={200, 200, "Emmanuel"};
    printf("%s\n", alan.nombre);
    alan.saludo("Hola soy un mago");
    printf("%d\n", alan.sumaDosnumeros (20,25));

    fillArray (myIntArray, 5 );
    printArray1D (myIntArray, 5);
    printf ("%d", myIntArray [0]);
    printf ("%d", myIntArray [1]);
    printf ("%d", myIntArray [2]);
    printf ("%d", myIntArray [3]);
    printf ("%d", myIntArray [4]);

    array* myArray = returnArray();
    printf(   "\n %d", myArray->dirArray [0]);
    printf(   "\n %d", myArray->dirArray [1]);
    printf(   "\n %d", myArray->dirArray [2]);



    return 0;
}