#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "class.h"

/*parseLine is the function whihc will break up each line in the csv file to be value in the struct in the array
 *
 *
 *
 */
void parseLine(Class* class, char* classLine){
    char *result;
    char line_result[150];
    
    strcpy(line_result, classLine);
    
    result = strtok(line_result, ",");
    strcpy(class->classNumber,result);

    result = strtok(NULL, ",");
    strcpy(class->className, result);
    
    result = strtok(NULL, ",");
    result = strtok(NULL, ",");
    result = strtok(NULL, ",");
    result = strtok(NULL, ",");
    strcpy(class->classSeats, result);
    
    result = strtok(NULL, ",");
    strcpy(class->profName, result);

    result = strtok(NULL, ",");
    strcpy(class->classDays, result);

}
