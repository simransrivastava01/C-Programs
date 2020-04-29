
#include <stdio.h>
void revWordsOrder(char *str)
{
  int i,j,k=0,q,l=0,p,n=0;
  char a[20][20];
  for(q=0;str[q]!='\0';q++);
  for(i=0;i<q;i++)
  {
    p=k;
    int c=0;
    if(str[i]==' ' || i==q-1)
    {
      if(i==q-1)
      {
      for(j=p;j<=i;j++)
      {
        a[l][c]=str[j];
        c++;
        k++;
      }
      a[l][c]='\0';
      l++;
      }
      else
        {
      for(j=p;j<i;j++)
      {
        a[l][c]=str[j];
        c++;
        k++;
      }
      a[l][c]='\0';
      l++;
      k++;
      }    
    }
  }
  for(i=l-1;i>=0;i--)
  {
    for(j=0;a[i][j]!='\0';j++)
    {
      str[n]=a[i][j];
      n++;
    }
    str[n]=' ';
    n++;
  }
  str[q]='\0';
}

int main()
{
  int t,i,j=0;
  scanf("%d", &t);
  char str[50];
  while(t--){
    scanf(" %[^\n]s",str);
  	revWordsOrder(str);
  	printf("%s\n", str);
  }
}
