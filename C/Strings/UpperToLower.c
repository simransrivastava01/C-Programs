
#include <stdio.h>
void upperToLower(char str[])
{
  int i,l=0;
  while(str[l]!='\0')
  {l++;}
  for(i=0;i<l;i++)
  {
    if(str[i]>='A' && str[i]<='Z')
    {str[i]=32+str[i];}
    else
    {str[i]=str[i];}
  }
  printf("%s",str);
}

int main() 
{
  int t;
  char s[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s",s);
    upperToLower(s);
  }
}
