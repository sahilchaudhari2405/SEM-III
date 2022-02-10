#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int power(int i, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int x = power(i, n / 2);
    if (n % 2 == 0)
    {
        return x * x;
    }
    return i * x * x;
}
int order(int n)
{
    int c = 0;
    while (n)
    {
        c++;
        n = n / 10;
    }
    return c;
}

void check(int x)
{
    int n = order(x);
    int temp = x, sum = 0;
    while (temp!=0)
    {
        int r = temp % 10;
        sum += power(r, n);
        temp = temp / 10;
    }
    if (sum == x)
    {
        printf("its a armstrong number\n");
    }
    else
    {
        printf("its not a armstrong number\n");
    }
}
void main()
{
    int num;
    scanf("%d", &num);
    check(num);
    getch();
}
