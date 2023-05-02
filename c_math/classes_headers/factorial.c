#include "factorial.h"
#include <stdio.h>

// n! = n × (n - 1)!

int factorial (void)
    {
        int number, factor = 1;
        printf("Enter number: ");
        scanf("%d", &number);

        for (int i = number; i >= 1; --i)
        {
            factor *= i;
        }
        printf("%d", factor);

    return 0;
}

//Todo:
// optimise for larger values , eg 80
