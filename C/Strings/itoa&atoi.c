
#include <stdio.h>

void itoa(int num, char* result)
{
  sprintf(result,"%d",num);
}

int atoi(char *str)
{
  int d=0,i;
  for(i=0;str[i]!='\0';i++)
  {
    d=d*10+str[i]-'0';
  }
  return d;

}

int main() 
{
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s %d", a, &i);
    itoa(i, b);
    j =atoi(a);
    printf("%d %s\n", j, b);
  }
}
