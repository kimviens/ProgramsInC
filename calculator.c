#include "library.h"
#include<stdlib.h>
#include <stdio.h>
int main(void){
    char operation;
    //Long int so that it can calculate potentially large numbers
    int m, n, answer;

    //Take in the input
    scanf("%d %c %d", &m, &operation, &n);

    if(operation == '+'){

        answer = m + n;

    } else if(operation == '-'){

        answer = m - n;

    } else if(operation == '*'){

        answer = m*n;

    } else if(operation == '/'){

        answer = m/n;

    } else if(operation == '%'){

        answer = m%n;

    } else {
        printf("Incorrect input. Terminating program");
        exit(0);
    }

    printf("%d %c %d = %d", m, operation, n, answer);


    return 0;
}