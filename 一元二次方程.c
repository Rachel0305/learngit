#include <math.h>
#include <stdio.h>

int main(void)

{
    double a, b, c;
    double delta;
    double x1, x2;
    char ch;
    do
    {
        printf("input 3 coefficient:\n");
        printf("a = ");
        scanf("%lf", &a);

        printf("b = ");
        scanf("%lf", &b);

        printf("c = ");
        scanf("%lf", &c);

        delta = b * b - 4 * a * c;

        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1=%lf x2=%lf", x1, x2);
        }
        else if (0 == delta)
        {
            x1 = x2 = (-b) / (2 * a);
            printf("x1=x2=%lf", x1, x2);
        }
        else
        {
            printf("no answers\n");
        }

        printf("want to go on?(y/n):\n");
        scanf(" %c", &ch); //%c前面必须得加一个空格 原因见c premier plus
    } while ('y' == ch || 'Y' == ch);

    return 0;
}