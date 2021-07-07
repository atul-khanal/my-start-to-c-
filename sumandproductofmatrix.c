/*Write a C program to find sum and product of two 3*3 matrices*/
#include<stdio.h>
int main()
{
    int s=3, i, j, k, O[s][s], z[s][s], sum[s][s], product[i][j], c=0;
    printf("Enter the first matrix in row order here:\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d", &O[i][j]);
        }
    }
    printf("Enter the second matrix in row order here:\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d", &z[i][j]);
        }
    }
    printf("The sum matrix is:\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            sum[i][j]=O[i][j]+z[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
        printf("The product matrix is:\n");
        for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            c=0;
            for(k=0;k<s;k++)
            {
                c=c+O[i][k]*z[k][j];
            }
            printf("%d ",c);
        }
        printf("\n");
    }
}