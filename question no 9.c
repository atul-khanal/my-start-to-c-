//1 1 2 3 5 8 13 .......
#include<stdio.h>
int main()
{ 
  int a,s,d=0,f=1,g=0;
  printf("enter any number\n");
  scanf("%d",&a);
  for(s=1;s<=a;s++)
  {
    d=d+f;
    printf("%d\n",f);
    printf("%d\n",d);
    f=d+f;
  }
  return 0;
}