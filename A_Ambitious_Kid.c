#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,j;
    scanf("%d", &n);
    int array[n];
    int arr[j];

    int min;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        arr[j]=abs(array[i]);

        if(min>arr[j]){
          min = arr[j];
        }
       
    }

    printf("%d",min);

   
    return 0;
}