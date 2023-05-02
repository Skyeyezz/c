#include <stdio.h>
#include "classes_headers/divisibleby.h"
#include "classes_headers/quadratic.h"
#include "classes_headers/primes.h"
#include "classes_headers/primegen.h"
#include "classes_headers/factorial.h"


// I will clean up this code when I have time...


int main(void)
{
    printf("\n------C MATH------\n\n");

    start:
    printf("\n");
    printf("1: Divisibility calculator\n");
    printf("2: Solve quadratic equation\n");
    printf("3: Prime Generator\n");
    printf("4: Factorial Calculator\n");
    printf("5: Exit\n\n");


    int choice;

    top:

    scanf("%d", &choice);

    if (choice > 5 || choice <= 0)
    {
        printf("Please enter a valid option!\n");
        goto top;
    }

        switch (choice) {

        case 1:
            divisibleby();
            break;

        case 2:
            quad();
            break;

        case 3:
            primegen();
            break;

        case 4:
            factorial();
            break;

        case 5:
            return 0;


    }

    goto start;

    return 0;


}
