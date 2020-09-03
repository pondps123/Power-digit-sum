#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
long long int digits(double x)
{
    int z;
    long long int y = 0;
    while (x > 10)
    {
        z = x / 10;
        y += x - (z * 10);
        x /= 10;
    }
    y += x;
    return y;
}
int main()
{
    int a;
    double b;
    printf("the sum of the digits of the number 2^");
    scanf("%d", &a);
    b = pow(2, a);
    printf("2^%d = %.0f\n", a, b);
    printf("the sum of the digits is %lld", digits(b));
    return 0;
}