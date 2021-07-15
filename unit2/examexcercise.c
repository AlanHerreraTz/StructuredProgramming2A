#include <stdio.h>

#include "./utilishexam.h"

int main () {

    ROBOT markovito;
    markovito.name = "Markovito";
    markovito.type = "ServiceRobot";
    markovito.height = 1.2;
    markovito.weight = 2.5;
    markovito.degreesoffreedom = 3;

    markovito.sayhellotorobot = sayhellotorobot;

    ROBOT tiago;
    tiago.name = "Tiago";
    tiago.type = "ServiceRobot";
    tiago.height = 1.7;
    tiago.weight = 2.8;
    tiago.degreesoffreedom = 7;
    tiago.sayhellotorobot = sayhellotorobot;

    markovito.sayhellotorobot (tiago);

    return 0;
}