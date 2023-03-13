#include <stdio.h>
int main(void){
    int num;
    int newTotal = 0;
    while (scanf("%d", &num) == 1){
        newTotal += num;
        }
    printf("The sum is %d\n", newTotal);
    printf("\n");
    return(0);
}
