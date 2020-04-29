#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,count=0;
  scanf("%d",&t);
  while(t--)
  {
    int n,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    
    for(int i=0;i<n;i++)
    {
      int index=i;
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]<arr[index])
        {index=j;}
      }
           temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp; 
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