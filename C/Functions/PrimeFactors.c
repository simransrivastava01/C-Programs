#include <stdio.h>

void primeFactors(int n)
{
  int num;
  num=n;
  int i;
  i=2;
  while(i<=n)
  {
    if(n%i==0)
    {printf("%d\n",i);
    n=n/i;}
    else 
    {i++;}
 }
 }

int main()
{
   int no;
    scanf("%d",&no);
    primeFactors(no);   
   return 0;   
}
