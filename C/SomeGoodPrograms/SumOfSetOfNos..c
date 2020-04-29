#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,num,sum=0;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%d",&num);
    sum=sum+num;
  }
printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}