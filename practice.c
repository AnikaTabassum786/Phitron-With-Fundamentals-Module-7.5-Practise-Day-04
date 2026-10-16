#include <stdio.h>

int main()
{

  int n;
  scanf("%d", &n);
  int array[n];
  
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }

  int x;
  scanf("%d",&x);
  int index;

  for(int i=0;i<n;i++){
      if(array[i]==x){
        printf("%d",i);
        break;
      }
      else{
        printf("%d",-1);
        break;
      }
  }

  return 0;
}