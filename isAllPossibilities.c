#include <stdio.h>
int isAllPossibilities(int num[], int);
int main()
{
    int n;
    printf("enter the number of elements in array");
    scanf("%d", &n);
    int num[n];
    printf("enter the elements of array");
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    printf("%d\n", isAllPossibilities(num, n));
    return 0;
}
int isAllPossibilities(int num[], int size)
{
    int z,var;
     for (int d = 0; d < size; d++)
    {
        for (int c = d + 1; c <= size; c++)
        {
            if (num[c] < num[d])
            {
                var = num[c];
                num[c] = num[d];
                num[d] = var;
            }
        }
    }
    for(int i=0; i<(size-1); i++)
    {
        if ((num[i+1]-num[i]) == 1)
            z=1;
        else
        {
            z=0;
            break;
        }
    }
    return z;
}