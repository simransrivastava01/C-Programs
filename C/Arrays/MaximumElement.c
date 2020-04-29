#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int i,arr[5],max;
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  max=arr[0];
  for(i=0;i<5;i++)
  {
    if(arr[i]>max)
    {max=arr[i];}
  }
  printf("%d",max);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}