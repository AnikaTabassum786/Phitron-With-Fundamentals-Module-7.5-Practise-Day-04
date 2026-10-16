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

  int index = -1;

  for(int i=0; i<n;i++){
    if(array[i]==x){
      index=i;
      break;
    }
  }

  printf("%d",index);

  return 0;
}