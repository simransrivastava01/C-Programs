#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,r1,r2,c1,c2,i,j,k,s,a[50][50],b[50][50],c[50][50];
  scanf("%d",&t);
  for(s=0;s<t;s++)
  {
    scanf("%d %d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    scanf("%d %d",&r2,&c2);
    for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
      {
        scanf("%d",&b[i][j]);
      }
    }
    if(c1==r2)
    {
      for(i=0;i<r1;i++)
      {
        for(j=0;j<c2;j++)
        {
          for(k=0;k<c1;k++)
          {
            c[i][j]=c[i][j] + (a[i][k]*b[k][j]);
          }
        }
      }
    }
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c2;j++)
      {
        printf("%d ",c[i][j]);
      }
       printf("\n");
    }
   
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c2;j++)
      {
        c[i][j]=0;
      }
    }
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}