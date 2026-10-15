// Given a number N and an array A of N numbers. Print the lowest number and its position.
// Note: if there are more than one answer print first one's position.

#include<stdio.h>

int main(){

    int n,x;
    scanf("%d",&n);
    int array[n];
    int min[x];
   int min_position;

    for(int i=1;i<=n;i++){
       scanf("%d",&array[i]);
       if(min[x]>array[i]){
         min[x]=array[i];
          min_position = i;
       }
    //    printf("%d\n",i);
    }
    printf("%d ",min[x]);
     printf("%d",min_position);

    return 0;
}