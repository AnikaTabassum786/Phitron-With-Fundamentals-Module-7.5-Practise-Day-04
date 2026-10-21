#include <stdio.h>

int main()
{

    int A, I, P, E;
    scanf("%d %d %d %d", &A, &I, &P, &E);

    if (((A >= 21 && A <= 35) && (I>=80 && I<=100) && (P>=70 && P<=100) && E >= 2) || (A>=30 && A<=35 && (I >= 95 && I<=100) 
    && (P >= 90 && P<=100) ))
    {
        printf("Selected");
    }
    else
    {
        printf("Rejected");
    }


    return 0;
}