#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Header file which declaresn my struct and my functions

typedef struct{
    char classNumber[50];
    char profName[50];
    char className[50];
    char classDays[50];
    char classSeats[50];


}Class;

int readClasses(Class* class);
char queryUser(Class* class, int);
void parseLine(Class* class, char*);
char askUser();
void printClassNum(Class* class, int);
void printClassesDay(Class* class, int);
void printClassProf(Class* class, int);
void printOneClass(Class class);
