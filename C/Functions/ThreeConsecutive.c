#include <stdio.h>
int threeConsecutive(int a, int b, int c)
{
  int arr[3],temp,i,j,k;
  arr[0]=a;
  arr[1]=b;
  arr[2]=c;
  for(int j=0;j<2;j++)
  {
    for(int k=0;k<2;k++)
    {
      if(arr[k]>arr[k+1])
      {
        temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
      }
    }
  }

  if((arr[1]-arr[0])==1 && (arr[2]-arr[1])==1)
  {return 1;}
  else
  {return 0;}
}
int main()
{
   int T, a, b,c;
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&a);
      scanf("%d",&b);
      scanf("%d",&c);
     
     printf("%d\n",threeConsecutive(a, b, c));
   }
  
    return 0;
}
