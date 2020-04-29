
#include <stdio.h>
int strAtEnd(char *str1, char *str2)
{
  int i=0,count=0,l=0;
  while(str1[i]!='\0')
  {
    i++;
  }
  while(str2[l]!='\0')
  {l++;}
  i--;
  for(int j=0;str2[j]!='\0';j++)
  {
    if(str1[i]!=str2[l-1-j])
    {
      count++;
      break;
    }
    i--;
  }
  if(count>0)
    return 0;
  else
    return 1;
}

int main() 
{
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d", &t);
  while(t--)
  {
    scanf("%s %s", a, b);
    i = strAtEnd(a, b);
    printf("%d\n", i);
  }
}