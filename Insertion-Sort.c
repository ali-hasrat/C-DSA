// Program to understand Insertion Sorting
#include<stdio.h>
void insertionSort(int arr[] , int n)
{
int i, key,j;
for(i=1;i<n;i++)
 {
  key=arr[i];
  j=i-1;
  while(j>=0 && arr[j]>key)
  {
     arr[j+1]=arr[j];
     j--;
  }
  arr[j+1]=key;
 }
}
int main()
{
   int n=8;
   int arr[8]={7,2,1,3,6,4,9,8};
  
   insertionSort(arr,n);
   printf("Elements after Sorting: ");
   for(int i=0;i<n;i++)
   {
      printf("%d ",arr[i]);
   }
  return 0;
}