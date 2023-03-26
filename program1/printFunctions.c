#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "class.h"
//compares the class number of the input and prints the classes details if it exists.
void printClassNum(Class* classes, int num){

    char number[20];
    char newLineDelim;
    int count;

    printf("Enter class number: ");
    scanf(" %[^\n]", number);
    scanf("%c", &newLineDelim);
    for(count = 0; count < num; count++){
        if(strcmp(number, classes[count].classNumber) == 0){
            printOneClass(classes[count]);
            break;
        }


    }

    if(count == num){
        printf("Invalid number");

    }
    return;
}


//compares for the days of the week and then prints the classes on those days
void printClassesDay(Class* classes, int num){
    
    int i;
    char combo[20];
    char newLineDelim;
    printf("Enter class day combo(MWF or TR): ");
    scanf(" %s",combo);
    scanf("%c", &newLineDelim);
    for(i = 0; i < num; i++){
        if(strncmp(combo, classes[i].classDays, strlen(combo)) == 0){
            printOneClass(classes[i]);
        }

    }
    return;
}

//compares for the porfessors name and prints the classes they teach
void printClassProf(Class* classes, int num){ 
    int i;
    char prof[20];
    char newLineDelim;
    printf("Enter Professors name: ");
    scanf(" %s", prof);
    scanf("%c",&newLineDelim);
    for(i = 0; i < num; i++){
        if(strncmp(prof, classes[i].profName,strlen(prof)) == 0){
        printOneClass(classes[i]);
}
    }
}
//prints the classes details on one line
void printOneClass(Class classes){
    printf(" %s",classes.classNumber);
    printf(" %s",classes.profName);
    printf(" %s", classes.classSeats);
    printf(" %s", classes.classDays);
}

