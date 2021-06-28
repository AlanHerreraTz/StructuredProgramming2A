#include <stdio.h>
#include <string.h>

#include "./utils.h"


int myInt = 4;
float myFloat= 3.1416;

int * pointerInt = &myInt;


int main(){
    printf("adress myInt: %p  myInt: %d \n", &myInt , myInt);
    printf("adress myFloat: %p myInt: %f \n", &myFloat, myFloat);
    printf("adress pointerInt: %p pointerInt: %p \n", &pointerInt , pointerInt);
    *pointerInt = 6;
    printf("adress myInt: %p myInt: %d \n", &myInt , myInt);

    
    
    //array myArray;
    array * myArray = returnArray();
    printf("%d\n", myArray->dirArray[1]);

    //malloc(), realloc (), calloc()

    return 0;
}