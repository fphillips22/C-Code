#include <stdio.h>
#include <math.h>

// CSCI112 Lab1 Spring 2022
// Fletcher Phillips


//giveDiscount will do the discounted price if it is just a purchase under $150

double addUp(double tax, double total) {
    double added = (tax + total);
    printf("\nTotal \t\t$%.2lf\n", added);
    return 0;
    }
//taxedOnly is called if and only if the user is not in the military
double taxedOnly(double tax, double total){
    double added = (tax + total);
    printf("Total \t\t$%.2lf\n", added);
    return 0;
}
int main(void) {
    double purchaseAmount;
    char inMilitary;
    printf("Cost of purchase: \t$");
    scanf("%lf", &purchaseAmount);
    getchar();
    printf("In military (y or n)?\t");
    scanf("%c", &inMilitary);
//if statement below tests if the user enters y or Y for yes
    if (inMilitary == 'y' || inMilitary == 'Y'){
        //below if statement tests if and only if the purchase price was equal to or more than 150 dollars
        if (purchaseAmount >= 150) {
            double discount = (purchaseAmount * .15);
            double newPrice = purchaseAmount - discount;
            double justTaxed = .05 * newPrice ;
            printf("Military Discount (15%%)\t$%.2lf\n", discount);
            printf("Discounted Total \t$%.2lf\t\n", newPrice);
            printf("Sales Tax (5%%)\t");
            printf("$%.2lf\t", justTaxed);
            addUp(justTaxed, newPrice);

        }
        //below if statement tests if and only if the purchase was equal to or more than 150 dollars
        if (purchaseAmount < 150) {
            double discount = (purchaseAmount * .10);
            double newPrice = purchaseAmount - discount;
            double justTaxed = .05 * newPrice ;
            printf("Military Discount (10%%)\t$%.2lf\n", discount);
            printf("Discounted Total \t$%.2lf\n", newPrice);
            printf("Sales Tax (5%%)\t");
            printf("\t$%.2lf", justTaxed);
            addUp(justTaxed, newPrice);
            }
        }
// if statement below tests if and only if the response to in military was n or N for no
    if (inMilitary == 'n' || inMilitary == 'N') {
        double justTaxed = .05 * purchaseAmount;
        printf("Sales Tax (5%%)\t");
        printf("\t$%.2lf\n", justTaxed);
        taxedOnly(justTaxed, purchaseAmount);
    }
    // below if statement tests if and only if the response to in military was not y or Y for yes or n or N for no and prints bad input
    if((inMilitary != 'y' && inMilitary != 'Y') && (inMilitary != 'n' && inMilitary !=  'N')) {
        printf("Bad input\n");
    }

    return (0);
}
