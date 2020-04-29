
#include <stdio.h>
#include<string.h>
void sortStrings(int num, char str[][50])
{
int i,j;
  char temp[500];
  for(i=0; i<num-1; ++i)
        for(j=i+1; j<num ; ++j)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
  for(i=0; i<num-1; ++i)
    {
        printf("%s ",str[i]);
    }
  printf("%s",str[num-1]);

}

int main()
{
  int t,i,j=0;
  char a[10][50], b[50];
  scanf("%d", &t);
  while(t--)
  {
    scanf("%d", &i);
    j=i;
    while(i--)
    {
      scanf("%s", a[i]);
    }
    sortStrings(j, a);
    printf("\n");
  }
}