#include <stdio.h>
int * mergeArrays(int a[], int b[], int asize, int bsize) 
{
  int size,i,j,temp;
  size=asize+bsize;
  for(i=asize,j=0;i<size,j<size;i++,j++)
  {
    a[i]=b[j];
  }
  for(int c=0;c<size-1;c++)
  {
    for(int d=0;d<size-1;d++)
    {
      if(a[d]>a[d+1])
      {
        temp=a[d];
        a[d]=a[d+1];
        a[d+1]=temp;
      }
    }
  }
  return a;
}

int main()
{
    int i, k, size = 0, size1 = 0, *final;
   
    scanf("%d", &size);
    int a[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &a[i]);

    scanf("%d", &size1);
    int b[size1];
    for( i = 0; i < size1; i++) 
        scanf("%d", &b[i]);
     
    final = mergeArrays(a, b, size, size1);
    
    for (i = 0; i < (size + size1); i++) 
        printf("%d\n", final[i]);

  return 0;
}
