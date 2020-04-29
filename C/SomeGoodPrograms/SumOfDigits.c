#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,n,d,i,sum=0;
  scanf("%d",&t);
  while(t--)
  {
    sum=0;
    scanf("%d",&n);
    while(n>0)
    {
      d=n%10;
      sum=sum+d;
      n=n/10;
    }
    printf("%d\n",sum);
  }
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}