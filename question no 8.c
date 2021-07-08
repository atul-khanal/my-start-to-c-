#include <stdio.h>
#include <math.h>
int main()
{ 
    unsigned long n,m=2,i=0,j=0,e=1,k=0,o=0;
    printf("Numbers of terms in the series= ");
    scanf("%lu",&n);
    printf("The sum of the series ");
    while(i!=n)
    {
        j=j+e;
        e=e*2;
        i++;
    }
    while(o!=n-1)
    {
        k=pow(m,o);
        printf("%lu+",k);
        o++;
    }
    k=0;
    k=pow(m,n-1);
    printf("%lu is ",k);
    printf("%lu.\n",j);
    return 0;
}