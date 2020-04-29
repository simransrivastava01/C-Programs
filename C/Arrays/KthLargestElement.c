#include <stdio.h>

int kthLargest(int arr[], int size, int k)
{
  int temp;
  for(int a=0;a<size-1;a++)
  {
    for(int b=0;b<size-1;b++)
    {
      if(arr[b+1]>arr[b])
      {
        temp=arr[b+1];
        arr[b+1]=arr[b];
        arr[b]=temp;
      }
    }
  }
  
 return arr[k];
  
}

int main()
{
    int T, i, k, size = 0;
    scanf("%d", &T);

  while (T--)
  {
    scanf("%d", &k);
    scanf("%d", &size);

    int arr[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    
        printf("%d\n",kthLargest(arr, size, k));
  }
  return 0;
}
