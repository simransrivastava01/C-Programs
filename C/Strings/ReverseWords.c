
#include <stdio.h>
#include<string.h>
void revWordsString(char *str)
{
  int n=strlen(str);
 int k=0,j;
 for(int i=0;i<n;i++)
 {
   if(str[i+1]==' '||str[i+1]=='\0')
 { int a=0;
    for(j=k;j<=(k+i)/2;j++)
    {
      char temp=str[j];
      str[j]=str[i-a];
      str[i-a]=temp;
      a++;
    }
  k=i+2;
   i++;
 }
 }
 printf("%s",str);
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
