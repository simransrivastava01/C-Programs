#include <stdio.h>
int gcd(int n1, int n2)
{
  int i,j,d1,d2,d=0,num1,num2;
  num1=n1;
  num2=n2;
  
  if(num1==num2)
  {
    d=num1;
  }
  else
  {
  for(i=1,j=1;i<=n1,j<=n2;i++,j++)
  {
    if(n1%i==0 && n2%j==0)
    {d1=i;
    d2=j;}
    else
    {continue;}
  }
  if(d1==d2)
  {d=d1;}
  }
 
return d;
}
int main()
{
     int i, j;
     scanf("%d",&i);
     scanf("%d",&j);
     printf("%d\n",gcd(i, j));
    return 0;
}
