#include <stdio.h>

int searchRotatedSortedArray(int *a, int size, int target)
{
  int i,index=0,count=0;
  for(i=0;i<size;i++)
  {
    if(a[i]==target)
    {index=i;
    count++;}
  }

  if(count!=0)
  return index;
  else
    return -1;
}
int main()
{
    int T, i, size = 0,target;
    scanf("%d", &T);

  while (T--)
  {
    scanf("%d", &target);
    scanf("%d", &size);

    int arr[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    
        printf("%d\n",searchRotatedSortedArray(arr, size, target));
  }
  return 0;
}

