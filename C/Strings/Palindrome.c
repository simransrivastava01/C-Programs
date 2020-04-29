
#include <stdio.h>

void isPalindrome(char *str)
{
  int i=0,count=0;
  while(str[i]!='\0')
  {
  	i++;  
  }
  for(int j=0;j<i/2;j++)
  {
    if(str[j]!=str[i-j-1])
    {
      count++;
      break;
    }
  }
  if(count==0)
    printf("YES");
  else
    printf("NO");
}

int main() 
{
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s", a);
    isPalindrome(a);
    printf("\n");
  }
}
