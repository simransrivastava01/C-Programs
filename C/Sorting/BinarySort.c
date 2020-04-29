#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,t;
  scanf("%d",&t);
  while(t--)
  {
   int temp=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {scanf("%d",&arr[i]);}
  
  for(int a=0;a<n-1;a++)
  {
    for(int b=0;b<n-1;b++)
    {
      if(arr[b]>arr[b+1])
      {
        temp=arr[b];
        arr[b]=arr[b+1];
        arr[b+1]=temp;
      }
     }
    }
  for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
      printf("\n");
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}