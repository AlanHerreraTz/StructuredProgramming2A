#include <stdio.h>
//#include <stdlib.h> //atoi, atof , springf
//#include <string.h> // strcpy
#define pi 3.1416

int libInteger = 24; //todas las variables de esta biblioteca son globales, no locales


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