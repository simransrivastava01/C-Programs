#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n1,n2;
  scanf("%d %d",&n1,&n2);
  n1=n1+n2;
  n2=n1-n2;
  n1=n1-n2;
  printf("%d\n%d",n1,n2);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}