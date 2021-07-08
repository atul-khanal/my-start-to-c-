#include <stdio.h>
int main()
{ 
    int a,s,d=0;
    printf("enter the natural number  :");
    scanf("%d",&a);
    if(a<=0)
    
        printf("you entered a non natural number\n");
    
    else
    {
        for(s=1;s<=a;s++)
        {
        d=d+s;
        }
        printf("the required sum of natural numner from 1 to %d is %d\n",a,d);
    }
    return 0;
}