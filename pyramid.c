#include<stdio.h>

int main()
{ 
    int n=5,i,space,j,k;
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf("  ");
        }
            for(j=i;j<=2*i-1;j++)
            {
                printf("%d ",j);
            }
            for(k=j-2;k>=i;k--)
            {
                printf("%d ",k);
            }
            printf("\n");
    }
    return 0;
}