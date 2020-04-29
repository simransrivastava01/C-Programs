#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,i,j,n;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%d",&n);
  int arr[n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
      for(j=0;j<n;j++)
      {
        for(i=(n-1);i>=0;i--)
        {
          printf("%d",arr[i][j]);
          if(i!=0)
          {printf(" ");}
        }
        printf("\n");
      }
    printf("\n");
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}