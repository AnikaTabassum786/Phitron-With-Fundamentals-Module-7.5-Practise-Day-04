#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int input;
        scanf("%d", &input);

        int count = 0;

        for (int i = 1; ; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                count++;

                if (count == input)
                {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }

    return 0;
}