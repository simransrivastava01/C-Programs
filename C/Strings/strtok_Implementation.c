#include <stdio.h>

char* strtok_code(char *str1, char *delim)
{
  int l=0,i,j;
  while(str1[l]!='\0')
  {l++;}
  for(i=0;i<l;i++)
  {
    if(str1[i]!=delim[0])
    {printf("%c",str1[i]);}
    else
    {printf("\n");}
  }
  printf("\n");

}

int main()
{
  int t,i,j=0;
  char str[50];
  char ch[2];
  scanf("%d", &t);
  while(t--)
  {
    scanf("%s %c", str, ch);
 strtok_code(str,ch);
    // Write your code here...
  }
}