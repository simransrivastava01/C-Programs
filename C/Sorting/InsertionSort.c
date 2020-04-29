#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,i,j,arr[30],size,count=0,key;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&size);
  
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=1;i<size;i++)
  {
    key=arr[i];
    j=i-1;
    while(arr[j]>key && j>=0)
    {
      arr[j+1]=arr[j];
      j=j-1;
    }
    if(arr[j+1]!=key)
    {arr[j+1]=key;
    }
  }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
  }
    return 0;
}