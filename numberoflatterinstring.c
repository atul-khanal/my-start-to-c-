#include <stdio.h>
int main()
{
    int m=0, b,i,a=0;
    char name[30];
    printf("enter name without any spaces: " );
    scanf("%s",name);
    while(name[a]!='\0')
        a++;
        for(i=0; i<=a; i++)
        {
            if (name[i] == 'i' || name[i] == 'I')
            {
                m = m + 1;
            }
        }
    printf("the number of i in given string is %d \n",m);
}