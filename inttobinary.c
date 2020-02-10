#include <stdio.h>
#include <math.h>

int main(void){

    double number, answer;

    scanf("%lf", &number);

    double exponent = round(log2(number));

    while(exponent >= 0){
        if(number - pow(2, exponent)>=0){
            printf("1");
            number = number - pow(2, exponent);
        } else {
            printf("0");
        }
        exponent= exponent -1;
    }
}