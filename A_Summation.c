#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    long long int array[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
        sum = sum + array[i];
    }
   
    printf("%lld", llabs(sum));

    return 0;
}