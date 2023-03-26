#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "class.h"


//askUser takes in the users desired option and returns it. queryUser then switches off of the option that was given in askUser in order to call the correct print Functions.

char askUser(){
    char option;
    char holder;
    printf("Choices: \nn - print by class number\nd -  print by class day combos\np - print classes given prof\nq - quit");
    printf("\n");
    
    scanf("%c%c", &option, &holder);
    return option;
}
char queryUser(Class* classes,int num){

    printf("\n");
    char option = askUser();
    switch(option){
        case 'q':
            break;
        case 'n':
            printClassNum(classes, num);
            break;
        case 'd':
            printClassesDay(classes, num);
            break;
        case 'p':
            printClassProf(classes, num);
            break;


    }
    return option;
}
