#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int i,arr[10],cp=0,cn=0,ce=0,co=0;
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<10;i++)
  {
    if(arr[i]>0)
    {cp++;}
    else
    {cn++;}
  }
  for(i=0;i<10;i++)
  {
    if(arr[i]%2==0)
    {ce++;}
    else
    {co++;}
  }
  printf("%d\n",cp);
   printf("%d\n",cn);
   printf("%d\n",ce);
   printf("%d\n",co);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}