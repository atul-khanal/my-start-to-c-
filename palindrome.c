#include<stdio.h>
#include<string.h>
#define N 20
int main()
{ 
    char word1[N],word2[N];
    printf("Enter first word\n");
    scanf("%s",word1);
     
    if(strcmp(word1,strrev(word1))==0)
    {
        printf("The word %s is palindrome",word1);
        
    }
    else
    {
        printf("The word is not palindrome");
    }
    
}