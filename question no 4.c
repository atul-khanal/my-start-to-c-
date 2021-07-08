#include <stdio.h>
int main()
{ 
    int i, a, num, b,fact=1, sum=0;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    a = num;
    while(num > 0)
    {
        b = num % 10;
        for(i=1; i<=b; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
        fact = 1;
    }
    if (sum==a)
    printf("%d is STRONG NUMBER\n",a);
    else
    printf("%d is not a strong number\n",a);
    return 0;
}