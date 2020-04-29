#include <stdio.h>
int decimalToBinary(int n)
{
  int i;
 if(n==0)
   return 0;
  else
  {
    i=n%2;
    n=n/2;
  return i+10*decimalToBinary(n);
  }
  
   
}
int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",decimalToBinary(no));
   }
 return 0;
}

