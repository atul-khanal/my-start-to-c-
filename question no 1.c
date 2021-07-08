#include <stdio.h>
int main()
{ 
    int a,s,d=1;
    printf("enter the number :");
    scanf("%d",&a);
    for(s=1;s<=a;s++)
    {
        d=d*s;
    }
    printf("the factorial of %d = %d\n",a,d);
    return 0;
}