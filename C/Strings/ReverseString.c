/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reverseString (char str[])
{
  int l=0,i;
  while(str[l]!='\0')
  {l++;}
  char s[100];
  for(i=0;i<l;i++)
  {
    s[i]=str[l-1-i];
  }
  for(i=0;i<l;i++)
  {
    str[i]=s[i];
  }
}


int main()
{
   char str[50];
   int test, num;
  
   scanf("%d",&test);
   while(test!=0)
   {
     scanf("%s", str);
     reverseString(str);
     puts(str);
     test--;
   }
    return 0;
}