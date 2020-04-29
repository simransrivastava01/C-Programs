#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,n,d,on,rv=0;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    on=n;
    rv=0;
    while(n>0)
    {
      d=n%10;
      rv=rv*10+d;
      n=n/10;
    }
    if(on==rv)
    {printf("Equal\n");}
    else
    {printf("Not Equal\n");}
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}