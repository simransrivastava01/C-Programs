#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,i,arr[50],n,k,index=0;
  scanf("%d",&t);
  while(t--)
  {
    index=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
      if(k==arr[i])
      {
        index=i;
     break;
      }
    }
    printf("%d\n",index);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}