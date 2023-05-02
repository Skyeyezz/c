#include "primegen.h"
#include <stdio.h>
#include <math.h>

int primegen (void)

{
    unsigned long long number = 1, max, max_check, is_prime, i;

    printf("Enter max number to check to or press 0 for highest number: ");
    scanf("%llu", &max);

    if (max == 0)
    {
        max = 18446744073709551615;
    }

    while (number <= max) {
        max_check = sqrt(number);
        is_prime = 1;

        for (i = 2; i <= max_check; ++i)
        {
            if (number % i == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1)
        {
            printf("%llu, ", number);
        }

        ++number;

    }

    return 0;
}

//Todo:
// optimise this using the Sieve of Eratosthenes algorithm
