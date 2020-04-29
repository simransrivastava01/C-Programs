#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,i,l=0,count=0;
  char str[100],ch;
  scanf("%s",str);
  scanf(" %c",&ch);
  while(str[l]!='\0')
  {l++;}
  for(i=0;i<l;i++)
  {
    if(str[i]==ch)
    {count++;
    break;}
  }
  if(count==1)
  {printf("1\n");}
  else
  {printf("Not Present\n");}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}