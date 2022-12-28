#include <stdio.h>
//Solves the area/volume of a cylinder with some shitty artwork...
// Area: a = 2 π r h + 2 π r∧2;
// Volume v = π r∧2 h

int main(void)
{
    double a,r,h,pie,v;
    int k;
    pie = 3.1415926535897;

    printf("Solve area or volume? ");
    printf("1 for area 2 for volume:");
    scanf("%d", &k);

    if (k == 1) {
        printf("Enter radius: ");
        scanf("%lf", &r);
        printf("Enter height: ");
        scanf("%lf", &h);

        a = (2 * pie * r * h) + (2 * pie * r * r);
        printf("\n");
        printf("A = 2 π r h + 2 π r∧2\n");
        printf("\n");

        printf(".---------.   ∧     Radius is %gm\n", r);
        printf("|~-------~|   |  \n");
        printf("|         |   |  \n");
        printf("|         |   |     Height is %gm\n", h);
        printf("|         |   |  \n");
        printf("|         |   |  \n");
        printf("|         |   |   %g = 2π x %g x %g + 2π x %g² \n", a, r, h, r);
        printf("|         |   |  \n");
        printf("-_________-   V  \n");
        printf("\n");

        printf("The area of the cylinder is: %gm²\n", a);
    }
    else if (k == 2)
    {
        printf("Enter radius: ");
        scanf("%lf", &r);
        printf("Enter height: ");
        scanf("%lf", &h);

        v = pie * r * r * h;

        printf("\n");
        printf("V = π r² h\n");
        printf("\n");

        printf(".---------.   ∧     Radius is %gm\n", r);
        printf("|~-------~|   |  \n");
        printf("|         |   |  \n");
        printf("|         |   |     Height is %gm\n", h);
        printf("|         |   |  \n");
        printf("|         |   |  \n");
        printf("|         |   |   %g = π x %g² x %g \n",v,r,h);
        printf("|         |   |  \n");
        printf("-_________-   V  \n");
        printf("\n");

        printf("The volume of the cylinder is %g cubic meters",v);

    }
    else printf("Please enter 1 or 2 not %d", k);

    return 0;
}
