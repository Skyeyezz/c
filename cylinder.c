//solves volume/area of a cylinder
#include <stdio.h>

#define pi 3.141592653589793

double volume(double radius, double height)
{
    double volume = pi * radius * radius * height;
    return volume;
}

double area(double radius, double height)
{
    double area = (2 * pi * radius * height) + (2 * pi * radius * radius);
    return area;
}

int main(void)
{

    printf("Solving for Cylinder:\n");
    top:
    printf("1: volume\n");
    printf("2: area\n");
    printf("3: exit\n");

    int choice;

    scanf("%d", &choice);

    double radius, height;

    if (choice == 1)
    {
        printf("Solving for volume\n");
        printf("Enter radius and height:");
        scanf("%lf,%lf", &radius, &height);

        double vol = volume(radius, height);
        printf("Volume = %lf\n", vol);

    }
    else if (choice == 2)
    {
        printf("Solving for area\n");
        printf("Enter radius and height:");
        scanf("%lf,%lf", &radius, &height);

        double A = area(radius, height);
        printf("Area = %lf\n", A);
    }
    else if (choice == 3)
    {
        return 0;
    }
    else{
        printf("Please enter a valid number\n");
        goto top;
    }

    goto top;

}
