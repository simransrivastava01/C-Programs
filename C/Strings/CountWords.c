
#include <stdio.h>
int countWords(char str[]) 
{
  int l=0,i,count=0;
  while(str[l]!='\0')
  {l++;}
  for(i=0;i<l;i++)
  {
    if(str[i]==' ' && str[i+1]!=' ')
    {count++;}
  }
  
  if(l!=0)
  return count+1;
  else
    return 0;
  
}

int main()
{
  int t,i,j=0;
  scanf("%d", &t);
  char str[50];
	
  while(t--){
    scanf(" %[^\n]s",str);
  revWordsString(str);
  printf("\n");
  }
}
