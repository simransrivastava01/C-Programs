#include <stdio.h>
int main()
{
  int arr[10],i,sum=0;
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
  }
  printf("%d",sum);
    return 0;
}