#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int i,a[10],b[10];
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
    b[i]=a[9-i];
  }
  for(i=0;i<10;i++)
  {
    printf("%d\n",b[i]);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}