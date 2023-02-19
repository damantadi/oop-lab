//gcd
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int gcd1(int *a, int *b)
{
    while (*a != *b)
    {
        if (*a > *b)
        {
            *a = *a - *b;
        }
        else
        {
            *b = *b - *a;
        }
    }
}
int gcd2(int &a, int &b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
}
int main()
{
    int x, y, hcf1, hcf2, hcf3;

    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);

    hcf1 = gcd(x, y);
    printf("Greatest common divisor of %d and %d using call by value is = %d\n", x, y, hcf1);
    int a, b;
    printf("Enter two integers\n");
    scanf("%d%d", &a, &b);
    hcf2 = gcd1(&a, &b);
    printf("Greatest common divisor of %d and %d using call by address is= %d\n", a, b, hcf2);
    int c, d;
    printf("Enter two integers\n");
    scanf("%d%d", &c, &d);
    hcf3 = gcd2(c, d);
    printf("Greatest common divisor of %d and %d using call by reference is= %d\n", c, d, hcf3);

    return 0;
}
