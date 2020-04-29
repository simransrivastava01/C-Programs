#include <stdio.h>

int strcmp(const char *str1, const char *str2) 
{
  int i,diff=0;
  for(i=0;str1[i]!='\0';i++)
  {
    if(str1[i]==str2[i])
    {diff=0;}
    else
    {diff=str1[i]-str2[i];
    break;}
  }
    return diff;
}

int main() 
{
  int t,i,j=0;
  char a[50],b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s %s", a, b);
    j=strcmp(a,b);
    printf("%d\n",j);
  }
}
