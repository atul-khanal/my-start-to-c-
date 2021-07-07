#include<stdio.h>
int main()
{
    int a[3][3];
    int b=0,c=0,s;
    printf("enter the 3*3 matrix \n");
    for (int i=0 ;i<=2;i++)
    {
        for (int j=0; j<=2; j++)
        {  
            scanf("%d",&a[i][j]);
        }
    }
    for(s=0; s<=2;s++)
    {
        for( int d=0; d<=2;d++)
        {
            if (d == s)
                b=b+a[s][d];
            else
                c=c+a[s][d];
        }
    }
    printf("the sum of diagonal element  is %d\n" ,b);
    printf("the sum of non diagonal element is %d \n",c);
}