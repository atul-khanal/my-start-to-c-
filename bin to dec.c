#include <stdio.h>
int main()
{ 
    int i,j,k,l=1,fact,sum=0;
    scanf("%d*",&j);
    for(i=1;i<j;i++)
    {
        fact=j%10;
        for (k=1;k<fact;k++)
        {
            l= l*k;
        }
        sum=sum+l;
        fact=fact/10;
    }
    printf("%d",sum);
}