#include <stdio.h>

int getPairsCount(int arr[], int n, int sum)
{
  int i,j,count=0;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if((arr[i]+arr[j])==sum)
      {count++;}
    }
  }
  return count;
}

int main()
{
  int i,T, n, k, a[100];
  scanf("%d",&T);
  while(T--)
  {
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    printf("%d\n",getPairsCount(a, n, k));
  }
  return 0;
}