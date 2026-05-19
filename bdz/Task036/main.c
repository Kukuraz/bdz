#include <stdio.h>
#include <math.h>

int solve_quadratic(double a, double b, double c, double *x1, double *x2)
{
    double D = b*b - 4*a*c;

    if (D > 0){
        *x1 = (-b + sqrt(D))/(2*a);
        *x2 = (-b - sqrt(D))/(2*a);
        return 2;
    }
    else if(D == 0){
        *x1 = -b/2*a;
        return 1;
    }
    else{
    return 0;
    }
}
int main(void)
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double x1, x2;  // ← добавить
    int roots = solve_quadratic(a, b, c, &x1, &x2);  // ← добавить &x1, &x2

    if (roots == 0)
        printf("No real roots\n");
    else if (roots == 1)
        printf("x = %.6f\n", x1);
    else
        printf("x1 = %.6f\nx2 = %.6f\n", x1, x2);

    return 0;
}




























//  double D = b*b - 4*a*c;

//     if (D < 0)
//         return 0;
//     else if (D == 0)
//     {
//         *x1 = -b / (2*a);
//         return 1;
//     }
//     else
//     {
//         *x1 = (-b + sqrt(D)) / (2*a);
//         *x2 = (-b - sqrt(D)) / (2*a);
//         return 2;
//     }