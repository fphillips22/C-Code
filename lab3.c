#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PATH "/public/lab3/exam.txt"
//getGrade takes in two parameters, divide represents the amount of questions in total, and missed is the amount of missed questions. If they miss none it prints a %100
void getGrade(double divide, double missed){
    double amountRight;
    double grade;
    double hundred = 100;
    amountRight = divide - missed;
    if(amountRight != divide){
        grade = (amountRight / divide) * hundred;
        printf(" %.2lf\n", grade);
    }
    if(amountRight == divide){
        printf(" 100.00\n");
    }
}
/*getAns takes in the parameter for the array of right answers. An array for the size of the answer key is declared.*/ 
int getAns(char *rightAns) {
    int wrong[sizeof(rightAns)] = {0};
    int total = 0;
    int dummy;
    FILE *fp;
    char dummy1;
    fp = fopen(PATH, "r");
    if (fp == NULL) {
        printf("Error!");
        return (1);
    }
    fscanf(fp, "%d", &dummy);
    for (int i = 0; i <= dummy; i++) {
        fscanf(fp, "%c", &dummy1);
   }
    printf("\n");
    while(fscanf(fp,"%d ",&dummy)==1){
        fscanf(fp, "%d", &dummy);
        printf("%d", dummy);
        //below for loop tests if the students answer was right or not and increments the amount that question is missed by 1 and the amount the student misses by 1.
        for (int i = 0; i < sizeof(rightAns)-1; i++) {
            fscanf(fp, "%c", &dummy1);
            if (dummy1 != rightAns[i]) {
                wrong[i]++;
                total++;
            }
}  
//calls getGrade
    getGrade(sizeof(rightAns)-1, total);
    total = 0;
    }

    printf("\nQuestion  ");
    //below for loop prints number of questions
    for(int i = 1; i < sizeof(rightAns); i++)
    {
        printf(" %d",i);
  }
  //below for loop prints array of how many times each question is missed
    printf("\nMissed by:");
    for(int i =0; i < sizeof(rightAns)-1; i++){
        printf(" %d",wrong[i]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
/* The main function makes a file pointer to the file and tests if the file exists. It then mallocs an array called key whihc will store the correct answers.
 * It then loops through setting the array key top the correct answers.*/
int main(void) {
    FILE *fptr;
    fptr = fopen(PATH, "r");
    if (fptr == NULL) {
        printf("Error!");
        return (1);
    }
    int size = 0;
    int testArrSize = 0;
    int counter = 0;
    char loopThrough;
    char *space = " ";
    char *newline = "\n";
    fscanf(fptr, "%d", &size);
    char *key = (char *) malloc(size * sizeof(char));
    fscanf(fptr, "%d", &testArrSize);
    printf("Question");
    loopThrough = fgetc(fptr);
    //Below while loop makes the answer key array.
    while ((loopThrough != EOF) && (counter < size) && (loopThrough != *newline)) {
        if(loopThrough != *space){
            key[counter] = loopThrough;
            counter = counter + 1;
            printf(" %d", counter);
        }
            loopThrough = fgetc(fptr);
    }
    printf("\n");
    printf("Answer  ");
    /*For loop printing key*/
    for(int i = 0; i < sizeof(key)-1; i++)
    {
        printf(" %c",key[i]);
    }
    printf("\nID  Grade(%%)\n");
    getAns(key);
    fclose(fptr);
    free(key);
    return 0;
}
