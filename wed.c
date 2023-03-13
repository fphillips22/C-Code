#include <stdio.h>
#include <stdlib.h> 
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
int main(void){
    char *strs[100];
    FILE* fptr = fopen("/public/lab4/hurricanes.csv", "r");
    int i = 0;
    int n = 100;
    if(fptr == NULL){
        printf("Error");
        return(1);
    }
    while(1){
    strs[i] = malloc(sizeof(char)*100);
    fgets(strs[i],n,fptr);
    if(feof(fptr)){
        break;
    }
    i++;
   }
    SelectionSort(strs,i);
    for(int j = 0; j < i; j++){
        printf("%s", strs[j]);
   }
    return(0);
}
