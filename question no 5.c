#include <stdio.h>
int main()
{ 
    int rem,dec,i;
    unsigned long long bin=0,m=1;
    printf("enter number between 1 to 1048575 : ");
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem =  dec%2;
        dec = dec/2;
        bin = bin+rem*m;
        m= m*10;
    }
    printf("%llu\n",bin);
    return 0;
}