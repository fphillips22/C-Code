//header will have a struct with 2 attributes in it - for class nuimner and class title
//
#include "student.h"
#include <stdio.h>
int main(void)
{
    struct studen student1;
    FILE* fptr = fopen("/public/pgm1/classes.csv", "r");
    if(fptr == NULL){
        printf("error");
        return(1);

    }
    fgets(student->
    //
    //pull off the first two items on the line adn put into your struct
    //
    result = strtok(line, ",");
    strcpy(one_class.classNum, result);
    char c;
    do{

        printf("Enter the t for class title, n for number, and q to quit");
        scanf("%c",&c);
        switch(c){
            case "t":
                printf"Class title:");
            case "n":
                printf("Class Number:");
}

    }while(choice != "q");
    fclose(fptr);
    return 0;
}
