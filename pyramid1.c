#include<stdio.h>
int main()
{ 
    int rows = 5;
    for(int i = 1;i <= rows;i++)
    {
        for(int j = 1;j <= rows - i;j++)
            printf("  ");
            
        for(int k = i;k <= (2*i - 1);k++)
            printf("%d ",k);
        
        for(int m = 2*(i-1);m>=i;m--)
            printf("%d ",m);
            
        printf("\n");
    }
    return 0;
}