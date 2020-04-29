#include <stdio.h>
#include<math.h>

/* Include other headers as needed */
int main()
{
  int t,n;
  float p;
  scanf("%d",&t);
  while(t--)
  {
    p=0;
    scanf("%d",&n);
    p=sqrt(n);    //in-built function.
    printf("%.2f\n",p);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}