#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,i,j,count=0;
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    count=0;
    for(j=2;j<=i;j++)
    {
      if(i%j==0)
      {count++;}
    }
    if(count==1)
    {printf("%d\n",i);}
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}