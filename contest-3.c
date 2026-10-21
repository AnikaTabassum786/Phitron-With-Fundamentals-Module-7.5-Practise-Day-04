#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int array[n];


    int count = 0;
    int max = 0;

    for(int i=0;i<n;i++){
    scanf("%d",&array[i]);

       if(array[i]==1){
        count++;

          if(count>max){
              max=count;
          }
       }
       else{
         count=0;
       }
    }

    printf("%d",max);

    
     return 0;
}