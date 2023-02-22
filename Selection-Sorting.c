//Program to understand Selection Sorting
#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int n=8;
    int arr[8]={4,5,3,6,7,8,2,1};
    for(int i=0;i<n-1;i++)
    {
        int max_idx=0;
        for(int j=1;j<n-i;j++)
        {
            if(arr[max_idx]<arr[j])
            {
                max_idx=j;
            }
        }
        swap(&arr[max_idx],&arr[n-i-1]);
    }
    printf("Element after Sorting: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}