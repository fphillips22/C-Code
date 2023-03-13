#include <stdlib.h>
#include <stdio.h>
#include <string.h>
   // Implements the selection sort
   // algorithm
void SelectionSort(char *strs[], int size) {
    int i, j;
    char temp[100];
        for (i = 0; i < size-1; i++) {
            for (j = i+1 ; j < size; j++) {
                if (strcmp(strs[i], strs[j]) > 0) {
                    strcpy(temp, strs[i]);
                    strcpy(strs[i], strs[j]);
                    strcpy(strs[j], temp);
              }
          }
      }
 }
//makeOutput takes in the sorted array and uses strtok in order to break apart each piece of the line in the array and prints to the output file
void makeOutput(char *strs,FILE* fp){
    char *broken;
    broken = strtok(strs,",");
    fprintf(fp,"%s\t ", broken);
    broken = strtok(NULL, ",");
    fprintf(fp,"%c\t ",broken[9]);
    broken = strtok(NULL, ",");
    fprintf(fp,"%s",broken);
    broken = strtok(NULL, ",");
    fprintf(fp," %s",broken);

}
//main opens the file hurricanes.csv and reads its line by line using gets
int main(void){
    int n = 100;
    FILE *fptr = fopen("/public/lab4/hurricanes.csv", "r");
    if(fptr == NULL){
        printf("Error");
        return(1);
    }
    char *hurricanes[100]; 
    int i = 0;
    while(1){
    hurricanes[i] = malloc(sizeof(char)*100);
    fgets(hurricanes[i],n,fptr);
    if(feof(fptr)){
        break;
    }
    i++;
   }
   //selection sort sorting the array
    SelectionSort(hurricanes,i);
    FILE *fp = fopen("lab4Text.txt", "w");
    fprintf(fp, "%s", "Hurricanes in Florida with category and date\n");
    //for loop calling makeOutput while j is less than the total amount of lines i.
    for(int j = 0; j < i; j++){
        makeOutput(hurricanes[j], fp);
        
   }
    fclose(fp);
    fclose(fptr);
    return 0;

}
