#include <stdio.h>
//Solves the area of a cylinder with some shitty artwork...
// a = 2 π r h + 2 π r∧2;

int main(void)
{
    double a,r,h,pie;
    pie = 3.1415926535897;

    printf("Enter radius: ");
    scanf("%lf", &r);
    printf("Enter height: ");
    scanf("%lf", &h);

    a = (2 * pie * r * h) + (2 * pie * r * r);
    printf("\n");
    printf("A = 2 π r h + 2 π r∧2\n");
    printf("\n");

    printf(".---------.   ∧     Radius is %gm\n",r);
    printf("|~-------~|   |  \n");
    printf("|         |   |  \n");
    printf("|         |   |     Height is %gm\n",h);
    printf("|         |   |  \n");
    printf("|         |   |  \n");
    printf("|         |   |   %g = 2π x %g x %g + 2π x %g² \n",a,r,h,r);
    printf("|         |   |  \n");
    printf("-_________-   V  \n");
    printf("\n");


    printf("The area of the cylinder is: %gm²\n", a);


    return 0;
}
