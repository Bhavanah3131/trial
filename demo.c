#include<stdio.h>
int main()
{
    int n, fact=1, factorial, i;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        factorial=fact*=i;
    }
    printf("Factorial of %d is %d", n, factorial);
    return fact;
}