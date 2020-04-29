#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,n,w,x,r,q=1,sum=0;
   char ch;
  scanf("%d",&t);
  while(t--)
  {
    sum=0;
   
    scanf("%d %d",&n,&w);
    scanf("%d %c",&x,&ch);
    if(n%w==0)
    {
      q=1;
      r=n/w;
      int a[r][w];
      for(int i=0;i<r;i++)
      {
        for(int j=0;j<w;j++)
        {
          if(q<=n)
          {a[i][j]=q;
          q++;}
          else
          { a[i][j]=0;}
        }
      }
      /*for(int i=0;i<r;i++)
      {	for(int j=0;j<w;j++)
       	{
       	  printf("%d ",a[i][j]);
       	}
       printf("\n");
      }*/
      if(ch=='R')
  		{
       		for(int i=0;i<w;i++)
              sum=sum+a[x-1][i];
     	}
      	else
  		{
       		for(int i=0;i<r;i++)
       	 		sum=sum+a[i][x-1];
   		}
        printf("%d\n",sum);
    }
    
    if(n%w!=0)
    {
      q=1;
      r=(n/w)+1;
      int a[r][w];
      for(int i=0;i<r;i++)
      {
        for(int j=0;j<w;j++)
       	{
          if(q<=n)
          {a[i][j]=q;
          q++;}
          else
          { a[i][j]=0;}
       	}
      }
      
    
    /* for(int i=0;i<r;i++)
      {	for(int j=0;j<w;j++)
       	{
       	  printf("%d ",a[i][j]);
       	}
       printf("\n");
      }*/
      
      if(ch=='R')
  		{
       		for(int i=0;i<w;i++)
              sum=sum+a[x-1][i];
     	}
      	else
  		{
       		for(int i=0;i<r;i++)
       	 		sum=sum+a[i][x-1];
   		}
        printf("%d\n",sum);
   	} 
    
  }
  return 0;
}