#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,n,count=0,count1=0,i,j,m;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    for(i=0;i<n;i++)
    {
      //count=0;
      for(j=i+1;j<n;j++)
      {
        if(arr[i]==arr[j])
        {count++;}
      }
      if(count>count1)
      {count=count1;
        m=arr[i];}
    if(count==count1)
    {
      if(m>arr[i])
      {m=arr[i];}
      else
      {m=m;}
    }
   
    }
  
  printf("%d\n",m);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}