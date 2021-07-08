#include <stdio.h>
int main()
{ 
    int a,s,d,f,g=0;
    printf("enter the numbers from n1 and n2 :");
    scanf("%d %d",&a,&s);
    if (a<1||s<a)
    {
        printf("error foramt try again\n");
    }
     else
    {
        printf("the prime number between %d and %d are/is\n",a,s);
        for(d=a;d<=s;d++)
        {
            for(f=1;f<=d;f++)
            {
                if(d%f==0)
                g=g+1;
            }
            if(g<=2)
            printf("%d\n",d);
            g=0;
        } 
    }    
    
    return 0;
}