#include<stdio.h>

int main(){

    int n,x;
    scanf("%d",&n);
    int array[n];

    int max[x];

    for(int i=0; i<n; i++){
        scanf("%d",array[i]);

         if(max[x]<array[i]){
         max[x]=array[i];
     }
    }

    printf("%d",max[x]);

    return 0;
}