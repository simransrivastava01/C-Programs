
#include <stdio.h>
int strstrCode(char *str1, char *sub)
{
  int l1=0,l2=0,i,j,count=0,index=0,s;
  while(str1[l1]!='\0')
  {l1++;}
  while(sub[l2]!='\0')
  {l2++;}
  s=0;
  for(i=0;i<l1;i++)
  {
    if(str1[i]==sub[s] && str1[i+1]==sub[s+1])
    {count++;
    index=i;
    break;}
    else
    {count=0;}
  }
 if(count==1)
 {return index;}
  else
  {return -1;}
}


int main() 
{
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s %s", a, b);
    j = strstrCode(a, b);
    printf("%d\n", j);
  }
}