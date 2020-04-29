#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int i,j,k,arr[5],n=5,smax,temp;
  for(i=0;i<n;i++)
  {scanf("%d",&arr[i]);}
  
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        for(k=j;k<n;k++)
        {arr[k]=arr[k+1];}
      n--;
      j--;
      }
    }
  }
 
 
 for(int a=0;a<n-1;a++)
 {
   for(int b=0;b<n-1;b++)
   {
     if(arr[b]>arr[b+1])
     {
       temp=arr[b];
       arr[b]=arr[b+1];
       arr[b+1]=temp;
     }
   }
 }
  smax=arr[n-2];
  printf("%d",smax);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}