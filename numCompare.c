#include <stdio.h>
main(){
    int num1, num2;
    printf("Enter the value for the first number: ");
    scanf("%d", &num1);
    printf("Enter the value for the second number: ");
    scanf("%d", &num2);
    if(num1 == num2)
        printf("%d is eqaul to %d", num1, num2);
    if(num1 < num2)
        printf("%d is less than %d", num1, num2);
    else
        printf("%d is greater than %d", num1, num2);
    return(0);
}
