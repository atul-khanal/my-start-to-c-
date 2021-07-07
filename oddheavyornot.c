#include <stdio.h>
int oddheavy(int num[], int);
int main()
{
    int n;
    printf("enter the number of elements in array ");
    scanf("%d", &n);
    int num[n];
    printf("enter the elements of array");
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    printf("%d\n", oddheavy(num, n));
    return 0;
}
int oddheavy(int num[], int size)

{
    int e=0, o=0, z, var, even[size], odd[size];
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
    for (int i = 0; i < size; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[e] = num[i];
            e+=1;
        }
        else
        {
            odd[o] = num[i];
            o+=1;
        }
    }
    for (int i = 0; i <(e-1); i++)
    {
        for (int j = 0; j <(o-1); j++)
        {
            if ((even[i] == 0) || (odd[j] == 0))
                continue;
            else if (even[i] < odd[j])
            {
                z = 1;
            }
            else
            {
                z = 0;
                break;
            }
        }
    }
    return z;
}