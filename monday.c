#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *ip =  malloc(sizeof(int));
    *ip = 5;
    printf("The address of the pointer to the integer is %p\n", ip);
    printf("The value that the pointer is pointing to is %d\n", *ip);
    free(ip);
    double *dp = malloc(sizeof(double));
    *dp = 2.5;
    printf("The address of the pointer to the double is %p\n", dp);
    printf("The value that the pointer is pointing to it %.1lf\n",*dp);
    free(dp);
    char *cp = malloc(sizeof(char));
    *cp = 'c';
    printf("The address of the pointer to the char is %p\n", cp);
    printf("The value that the pointer is pointing to it %c\n",*cp);
    free(cp);

}
