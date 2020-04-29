#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,i,count=0;
  char str[100];
  scanf("%d",&t);
  while(t--)
  {
    count=0;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]!='\0')
      {count++;}
    }
    printf("%d\n",count);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}