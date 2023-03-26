#include <stdio.h>
#include "class.h"
#include <stdlib.h>
#include <string.h>

//main.c creates an integer to be passed into queryUser so that it has the correct amount of classes to run through. Breaks on q.

int main(void){
    Class classes[50];

    int amountOfClasses;
    char option;

    amountOfClasses = readClasses(classes);
    do{
    option = queryUser(classes, amountOfClasses);
}while(option != 'q');
    return 0;

}
