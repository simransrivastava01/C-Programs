#include <stdio.h>
#include<math.h>
int binaryToDecimal(int n)
{
  int i=0,binary=0,rem=0;
  while(n!=0)
  {
    rem=n%10;
    binary=binary+rem*pow(2,i);
   i++;
    n=n/10;
  }
  return binary;
}
int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",binaryToDecimal(no));
   }
 return 0;
}