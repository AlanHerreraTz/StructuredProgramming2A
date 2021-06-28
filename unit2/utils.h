#include <stdio.h>
#include <stdlib.h>
//#include <stdlib.h> //atoi, atof , springf
//#include <string.h> // strcpy
#define pi 3.1416

typedef struct utils {
    int myInt;
    void (*ShowIntadress) (int* param);
}UTILS;

typedef struct  array 
{
    int dirArray [2];
    float aFloat;
    float * aFloatPointer;


}array;


int libInteger = 24; //todas las variables de esta biblioteca son globales, no locales
int myVar1 =30;
int myVar2 = 50;


void sayHello (char message [] ){
    printf( "%s\n" , message  );
}

void sayName (char message [] ){
    printf("%s\n", message);


}

int addtwonumbers (int argumento1, int argumento2){
    int result = argumento1 + argumento2 ;   
    return result; 
}
//Paso de argumentos por direccion //
void modifyVariables (int argument1, int argument2 ){
    argument1 = argument1*2;
    argument2 = argument2*2;
    return ;
}

//Paso de argumentos por direccion//


void showIntadress ( int*  param1){
    printf("adress: %p \n", param1 );

}
void showintvalueadress (int* param1){
    printf("Value: %i \n", *param1);

}

void modifyVariablesAdress (int* dir1, int* dir2, int multiplo ){
    showIntadress (dir1);
    showintvalueadress (dir1);
    showIntadress (dir2);
    showintvalueadress(dir2);
    *dir1 = *dir1 *multiplo;
    *dir2 = *dir2 *multiplo;

    return;
//El unico tipo variable capaz de cachar una direccion es un pointer
}
//no esta terminado todavia, es del programa swap.c
//int swapvariables (int*dir1, int*dir2){
    //printf("This is the adress and value of num1: \n", &dir1);
    //showintvalueadress(dir1);
    //showintvalueadress(dir1);
    //printf("This is the adress and value of Num2: \n", &dir2 );
    //showintvalueadress(dir2);
    //showintvalueadress(dir2);
    //int tmp;
    //tmp =dir1;
    //*dir1 = *dir2;
    //*dir2 = *dir1;

    //return 0;
    //}

void swap( int* ptr1, int*ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;
}

void swapGlobal(){
        int temp = myVar1 ;
        myVar1 = myVar2 ;
        myVar2 = temp;

        return;
}

void fillArray (int array [], size_t tam ){
    for (size_t i = 0; i < tam; i++)
    {
        array [i] = i*2;
    }
    return;
}

void printArray1D (int array[], size_t tam ){
    for (size_t i = 0; i < tam ; i++)
    {
        printf( "Value: %i\n", array[i]);
    }
    return;

}
 
 void * returnArray(){
     array* unArrayType =(array*)malloc(sizeof(array));
     printf("adress unArrayType: %p, unArrayType = %p\n", &unArrayType, unArrayType);
     unArrayType -> dirArray [0] = 17;
     unArrayType -> dirArray [1] = 15;
     

     return unArrayType;


 }

 
// array otherFunction(){

//     array return;

//}