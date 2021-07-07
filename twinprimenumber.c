#include<stdio.h>
int main()
{
    int n,m=0,var,z ;
    printf("enter the number of element for array : ");
    scanf("%d",&n);
    int a[n] , t[n];
    printf("enter the elements of array : ");
    for (int b= 0; b<n; b++)
    {
        scanf("%d",&a[b]);
    }
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
            t[i]=a[i];
        m=0;
    }
     for (int d=0; d<n; d++)
    { 
        for(int c=d+1; c<=n;c++)
        {
            if (t[c]<t[d])
            {
                var=t[c];
                t[c]=t[d];
                t[d]=var;
            }
           
        }
    }
    for (int c=0;c<n;c++)
    {
        if (t[c]==0||t[c]==1)
            continue;
        if ((t[c+1]-t[c])==2|| (t[c+1]-t[c])==1)
        
        {
            printf("(%d,%d)\n",t[c],t[c+1]);
            z=1;
        }
    }
    if (z==1)
    printf("Are twin prime number in given array\n");
    else 
    printf("No twinprime number in array\n");
}
