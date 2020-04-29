#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,n,i,k,count=0;
  scanf("%d",&t);
  while(t--)
  {
    count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    for(i=0;i<n;i++)
    {
      if(arr[i]==k)
      {count++;}
    }
    printf("%d\n",count);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}