#include "divisibleby.h"
#include <stdio.h>
#include <math.h>

int divisibleby (void)

{
    int number, max, i;

    printf("Enter a number:");
    scanf("%d", &number);

    max = sqrt(number);
    for (i = 2; i <= max; i++)
    {
        if (number % i == 0)
        {
            printf("%d is divisible by:\n", number);
            goto division;
        }
    }

        printf("%d is a prime number\n", number);
        return 0;


    division:
    i = 2;
    printf("%d, ", 1);

    max = number / 2;

    top:
    if (number % i == 0)
    {
        printf("%d, ", i);
    }

    if (i == max || (i + 1) >= number)
    {
        printf("%d, ", number);

        return 0;
    }

    ++i;
    goto top;

}

//To do:
// add Prime factorization calculator, eg 60 is 2 × 2 × 3 × 5

