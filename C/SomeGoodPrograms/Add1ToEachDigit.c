#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,i,n,count=0,d,sum=0,num,fn=0;
  scanf("%d",&t);
  while(t--)
  {
    count=0;
    fn=0;
    sum=0;
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
      d=n%10;
      count++;
      n=n/10;
    }
    for(i=0;i<count;i++)
    {
      sum=sum*10+1;
    }
    fn=num+sum;
    printf("%d\n",fn);
  }
    return 0;
}