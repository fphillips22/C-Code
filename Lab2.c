//Fletcher Phillips
//CSCI 112 Lab 2

#include <stdio.h>
#include <math.h>

 /*
  * breakMyNumber takes in two integers numbers and sum1, sum1 is the sum of all the digits of the inputted number which is represented
by numbers. The length of numbers if found by using log10+1. An array is declared as the length of numbers - 1. The first for loop places the
digits of numbers in the array. The second for loop runs backwards through the array in order to print out the addition of the digits to equal sum
 */
int breakMyNumber(int numbers, int added) {
    int len = log10(numbers) + 1;
    int arr[len-1];
    for (int i = 0; i < len; i++) {
        arr[i] = numbers % 10;
        numbers = numbers / 10;
    }
    for(int j = len; j >= 2; j--){
        printf(" %d +", arr[j-1]);
    }

    printf(" %d = %d", arr[0], added);
    return 0;
}
/*
 * main asks the user for an inputted number while that inputted number is not equal to 0.
 * Two while loops are used, one to enter
 * It then calls breakMyNumber.
 * Then it tests if the sum is divisible by nine using if loops and prints back if it is and if the inputted number is.
 */
int main(void) {
    int numberDivided;
    int newX;
    int newNum;
    int sum = 0;
    printf("Enter a number to check (0 to end): ");
    scanf("%d", &numberDivided);
    while(numberDivided != 0) {
        newX = numberDivided;
        while (numberDivided > 0) {
            newNum = numberDivided % 10;
            sum = sum + newNum;
            numberDivided = numberDivided / 10;
        }
        breakMyNumber(newX, sum);
        if (sum % 9 == 0) {
            printf("\tSince %d is divisible by 9, %d is divisible by 9\n", sum, newX);
        }
        else {
            printf("\tSince %d is not divisible by 9, %d is not divisible by 9\n", sum, newX);
        }
        printf("\nEnter a number to check (0 to end): ");
        scanf("%d", &numberDivided);
        newX = 0;
        sum = 0;
    }
    return 0;
}

