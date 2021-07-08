#include <stdio.h>
#include <math.h>
int main()

{ 
    int n,m,i=1,j;
    printf("enter a nnumner n =");
    scanf("%d",&n);
    printf("enter second number m =");
    scanf("%d",&m);
    while(i!=n)
    {
        j=pow(m,i);
        printf("the value pd %d^%d is %d\n",m,i,j);
        i++;
    }
    return 0;
}