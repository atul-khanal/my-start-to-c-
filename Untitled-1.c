//Two numbers are called twin prime if they are prime and their difference is no more than 2. Write a C program reads ‘N’ numbers in an array and check whether the array contains twin primes or not
#include<stdio.h>
int main(void)
{
    int N, array[100], i, j, c, prime[100], twin[100];
    printf("How many numbers do you have?\n");
    scanf("%d", &N);
    printf("Enter %d numbers here\n", N);
    for(i=0;i<N;i++)
        scanf("%d", &array[i]);
    for(i=0;i<N;i++){
        c=0;
        for(j=1;j<array[i];j++)
            if(array[i]%j==0)
                c++;
        if(c==1)
            prime[i]=array[i];          
        else            prime[i]=0;
    }
    c=0;
    for(i=0;i<N;i++)
        if(prime[i]!=0){
            twin[c]=prime[i];
            c++;
        }
    int n=0;
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(twin[i]-twin[j]<=2 && twin[i]-twin[j]>0) 
                n++;
        }
    }
    if(n>0)
        printf("The given array contains twin prime.");
    else        
        printf("The given array doesn't contain twin prime.");
}