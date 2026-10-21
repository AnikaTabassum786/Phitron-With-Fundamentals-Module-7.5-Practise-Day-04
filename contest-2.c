#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int array[n];

    int max=0;

    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);

         if(max<array[i]){
         max=array[i];
     }
    }

    printf("%d",max);

    return 0;
}