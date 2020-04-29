
#include <stdio.h>

void remDuplicates(char *str)
{
  int i,j=0,l=0;
  char s[50];
  while(str[l]!='\0')
  {l++;}
  for(i=0;i<l;i++)
  {
    if(str[i]==str[i+1])
    {continue;}
    else
    {
      s[j]=str[i];
      j++;
    }
  }
for(i=0;i<j;i++)
{str[i]=s[i];}
  str[i]='\0';
}


int main()
{
  int t,i,j=0;
  char a[50];
   if ( scanf("%d", &t) != 1 ){
    printf("Wrong input");
    exit(1);
  }
  while(t--)
  {
    scanf("%s", a);
    remDuplicates(a);
    printf("%s\n", a);
  }
}
