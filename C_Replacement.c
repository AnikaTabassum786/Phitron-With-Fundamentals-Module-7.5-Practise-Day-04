// Replace every positive number by 1.
// Replace every negative number by 2.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] > 0)
        {
            printf("%d ", 1);
        }
        if (array[i] < 0)
        {
            printf("%d ", 2);
        }
        if (array[i] == 0)
        {
            printf("%d ", 0);
        }
    }

    return 0;
}