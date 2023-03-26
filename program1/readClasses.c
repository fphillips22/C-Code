#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

//this function reads in each line from the file and then calls parseLine to make each lines peices into a specific value in the array

int readClasses(Class* class){
    FILE *fptr; 
    fptr = fopen("/public/pgm1/classes.csv", "r");
    int count = 0;
    char classLine[150];
    if(fptr == NULL){
        printf("No file exists");
        return 1;
    }
    while(fgets (classLine, 150, fptr)!=NULL ) {
        parseLine(&class[count],classLine);
        count++;
   }   
    fclose(fptr);
    return count-1;
}

