
#include <stdio.h>
void countCharacters (char str[])
{
  int v=0,c=0,d=0,i,l=0;
  while(str[l]!='\0')
  {l++;}
  for(i=0;i<l;i++)
  {
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {v++;}
    
   else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
    {c++;}
    
    else if(str[i]>='0'||str[i]<='9')
    {d++;}
  }
  printf("%d\n%d\n%d\n",v,c,d);
}


int main() 
{
  int t;
  char s[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s",s);
    countCharacters (s);
  }
}