#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "./utils.h"



int main (int argc, char** argv){

    UTILS myStructC = {showIntadress};
    printf ("myInt: %d. &myStructC: %p \n ", myStructC. myInt, &myStructC);
    UTILS* myStructP = &myStructP;

    printf("myInt: %d\n", (*myStructP).myInt);
    printf("myInt: %d\n", myStructP->myInt);
    //                alternativa, myStructP->myInt

    myStructC.ShowIntadress(&otroInt);

    return 0;
}