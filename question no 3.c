#include <stdio.h>
int main()
{ 
    int a,s,d=0,f;
    printf("enter the natural number  :");
    scanf("%d",&a);
    for(s=1;s<=a;s++)
    {
    d=d+s*s*s;
    }
    printf("the required sum of cube of natural numner from 1 to %d is %d",a,d);
    return 0;
}
/* output
enter the natural number  :4
the required sum of cube of natural numner from 1 to 4 is 100 */

