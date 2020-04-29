#include <stdio.h>
#include<math.h>
int power(int base, int exp)
{
  int p;
  p=pow(base,exp);
  return p;
}

int main()
{
   int T, base, exp;
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&base);
      scanf("%d",&exp);
     
     printf("%d\n",power(base, exp));
   }
    return 0;
}

