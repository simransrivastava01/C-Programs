#include<stdlib.h> 
#include<stdio.h> 

/* This function picks an element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) 
   to left of void swap(int *a,int *b)
   
/* low is for left index and high is right index of the sub-array of arr to be sorted */
void swap(int *a,int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
int partition (int arr[], int low, int high) {
  int pivot,j,i;
  i=low-1;pivot=arr[high];
  for(j=low;j<=high;j++)
  {
    if(arr[j]<pivot)
    {i++;swap(&arr[j],&arr[i]);}
  }
  swap(&arr[i+1],&arr[high]);
  return i+1;
  
}

/* low is for left index and high is right index of the sub-array of arr to be sorted */
void quickSort(int array[], int low, int high) {
  if(low<high)
  {
    int pivot_ind=partition(array,low,high);
    quickSort(array,low,pivot_ind-1);
    quickSort(array,pivot_ind+1,high);
  }
  
}

int main() 
{
  int i,n, arr[50];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

  quickSort(arr, 0, n-1); 
  for (i=0; i < n; i++) 
    printf("%d ", arr[i]); 
  return 0; 
} 