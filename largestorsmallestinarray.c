#include<stdio.h>
int main()
{
    int n , m , o ;
    printf("enter the number of element for array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for (int b= 0; b<n; b++)
    {
        scanf("%d",&a[b]);
    }
    m=a[0];
    for (int c=0 ; c<n; c++)
    {
        if (m < a[c])
        {
            m=a[c];
        }
    }
    o=m;
    for (int c=0 ; c<n; c++)
    {
        if (o > a[c])
        {
            o = a[c];
        }
    }
    printf("the largest number in array is %d \n",m);
    printf("the smallest number in array is %d \n",o);
}