// echo "1 -2 1" | ./qe
// man sqrt
// man 3 printf

#include <stdio.h>
#include <math.h>

double discrim(double a, double b, double c)
{
    return b*b - 4*a*c;
}
int main()
{
    double p, q, r, d;
    int n;
    n = scanf("%lf %lf %lf", &p, &q, &r); // & - операция взятия адреса
    if(n != 3) {
        printf("Error: wrong input.\n");
        return 1;
    }
    if(p == 0) {
        printf("Error: Not a quadratic equation!\n");
        return 2;
    }
    d = discrim(p, q, r);
    if(d < 0) {
        printf("No roots\n");
        return 0;
    }
    d = sqrt(d);
    printf("%.5lf %.5lf\n", (-q-d)/(2*p), (-q+d)/(2*p));
    return 0;
}
