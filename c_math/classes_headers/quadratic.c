#include "quadratic.h"
#include <stdio.h>
#include <math.h>


int quad(void)
{


    double a, b, c, root1, root2, discriminant;
    printf("Enter for a: ");
    scanf("%lf", &a);
    printf("Enter for b: ");
    scanf("%lf", &b);
    printf("Enter for c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root are real and different:\n");
        printf("x1 = %lf\n", root1);
        printf("x2 = %lf\n", root2);


        // gnuplot:

        FILE *fp = fopen("graph.dat", "w");
        for (double i = root1 - 5; i <= root2 + 5; i += 0.1) {
            double y = a * i * i + b * i + c;
            fprintf(fp, "%lf %lf\n", i, y);
        }
        fclose(fp);

        FILE *gp = popen("gnuplot -persistent", "w");
        fprintf(gp, "plot 'graph.dat' with lines\n");
        fflush(gp);
        pclose(gp);
    }

    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("x1 = x2 = %lf\n", root1);

        FILE *fp = fopen("graph.dat", "w");
        for (double i = root1 - 5; i <= root1 + 5; i += 0.1) {
            double y = a * i * i + b * i + c;
            fprintf(fp, "%lf %lf\n", i, y);
        }
        fclose(fp);

        FILE *gp = popen("gnuplot -persistent", "w");
        fprintf(gp, "plot 'graph.dat' with lines\n");
        fflush(gp);
        pclose(gp);

    }

    else {
        printf("Roots are imaginary.\n");
    }

    return 0;
}
