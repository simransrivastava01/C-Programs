#include <stdio.h>
void strcatCode(char *str1, char *str2) 
{
  int i,j,l1=0,l2=0,l=0;
  while(str1[l1]!='\0')
  {l1++;}
  while(str2[l2]!='\0')
  {l2++;}
  l=l1+l2;
  for(i=l1,j=0;i<l,j<l2;i++,j++)
  {
    str1[i]=str2[j];
  }
 
str1[i]='\0';
}

int main() 
{
  int t,i,j=0;
  char a[50],b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s %s", a, b);
    strcatCode(a,b);
    printf("%s\n", a);
  }
}
