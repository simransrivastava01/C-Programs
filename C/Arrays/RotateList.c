#include <stdio.h>

int main()
{
  int tcase,i,k,r,n,temp,a[100];
  scanf("%d",&tcase);
  while(tcase)
  {
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
      temp=a[0];
      for(i=0;i<n;i++)
      {
        a[i]=a[i+1];
      }
      a[n-1]=temp;
    }
    for(i=0;i<n-1;i++)
      printf("%d ",a[i]);
    printf("%d",a[n-1]);
    if(tcase!=1)
      printf("\n");
    tcase--;
  }
    return 0;
}