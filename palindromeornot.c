#include<stdio.h>
int main()
{
    int a=0,s,res=1;
    char name[20],rev[20];
    printf("enter a string: ");
    scanf("%s",name);
    while(name[a]!='\0')
        a++;
    a=a-1;
    for(s=0; s<=a; s++)
    {
        rev[s]=name[a-s];
    }
    for(s=0; s<=a; s++)
    {
        if (name[s]!=rev[s])
        {
            res=0;
            break;
        }
    }
    if (res==1)
        printf("palindrone ");
    else
        printf("not palindrone");
}