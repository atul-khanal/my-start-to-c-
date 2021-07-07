#include<stdio.h>
int main()
{
    int var,n,m=0;
    printf("enter the number of element for array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for (int b= 0; b<n; b++)
    {
        scanf("%d",&a[b]);
    }
    for (int d=0; d<n; d++)
    { 
        for(int c=d+1; c<=n;c++)
        {
            if (a[c]<a[d])
            {
                var=a[c];
                a[c]=a[d];
                a[d]=var;
            }
        }
        
    }
    for(int k=0; k<n; k++)
    {
        printf("%d, ",a[k]);
    }
}