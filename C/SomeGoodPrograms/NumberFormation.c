#include <stdio.h>

int formNumber()
{
  int n,num,sum=0,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&num);
    sum=sum*10+num;
  }
return sum;
}
int main()
{
  int no;
  no=formNumber();
  printf("%d",no);
  
  return 0;
}