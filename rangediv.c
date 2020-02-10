#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void){
    int number = 20, number_cycle = 2, counter = 1, answer;
    bool found = false;

    while(found == false){
        while(number_cycle != 21){
            if(number%number_cycle == 0){
                counter++;
            }
            number_cycle++;
        }

        if(counter == 20){
            found = true;
            answer = number;
        }

        //resets variables if not found
        counter = 1;
        number_cycle = 2;
        number++;
    }

    printf("The number is: %d", answer);
}