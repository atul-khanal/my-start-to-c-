#include<stdio.h>
int main()
{
    int n,m=0;
    printf("enter the number of element for array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for (int b= 0; b<n; b++)
    {
        scanf("%d",&a[b]);
    }
    printf("the prime number present in array are :");
    for(int i=0; i<n; i++)
    {
        for (int b=1; b<=a[i]; b++)
        {
            if ( a[i]<0 && a[i]==0 && a[i]==1)
                continue;
            else if (a[i]%b==0)
                m = m+1;
        }
        if( m==2 )
            printf("%d, ",a[i]);
        m=0;
    }
}