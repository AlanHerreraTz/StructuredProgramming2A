#include <stdio.h>

#include <stdlib.h>


typedef struct robot{
    char *name;
    char *type;
    float height;
    float weight; 
    float degreesoffreedom;
    void (*sayhellotorobot) (struct robot);

}ROBOT;


void sayhellotorobot (ROBOT robotex) {

    printf ("%s %s \n", "Hello world", robotex.name);
}
