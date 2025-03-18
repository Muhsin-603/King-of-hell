#include<stdio.h>
#ifndef sort_h
#define sort_h
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}//To swap the adjascent items
void bs(int arr[],int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<(n-i-1);j++)
{
if(arr[j]>arr[j+1])

	swap(&arr[j],&arr[j+1]);//what we need to swap was the content in the address hence the '&' sign
}
}
}//For bubble sorting
#endif
