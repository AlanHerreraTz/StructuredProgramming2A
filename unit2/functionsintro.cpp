#include <iostream>
#include <tuple>

std:: string myString = "Hola Mundo";
int myNumber  = 3;
float myFloat =3.1416;

std::tuple <int, std::string > myTuple = { 1, "string" }; //test
//Declarando
void sayHello (std::string tag1);

int main(){

    //myTuple = {}

    sayHello(myString);



    return EXIT_SUCCESS;
}

//Definir 
void sayHello (std::string tag1){
    std::cout<<tag1<<std::endl; //cout esta contenida en la standard library de c++


}