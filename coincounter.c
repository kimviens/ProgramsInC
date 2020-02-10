#include "library.h"
#include<stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){

    int amount_entered, amount, dollars, quarters, dimes, nickels, pennies;

    scanf("%d", &amount_entered);

    amount = amount_entered;

    amount %= 100;
    dollars = (amount_entered-amount)/100;
    amount_entered %= 100;


    amount %= 25;
    quarters = (amount_entered-amount)/25;
    amount_entered %= 25;

    amount %= 10;
    dimes = (amount_entered-amount)/10;
    amount_entered %= 10;

    amount %= 5;
    nickels = (amount_entered-amount)/5;

    pennies = amount;

    printf("Dollars: %d Quarters: %d Dimes: %d Nickels: %d Pennies: %d \n", dollars, quarters, dimes, nickels, pennies);

    return 0;
}


