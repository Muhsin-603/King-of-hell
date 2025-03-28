#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Even\0Odd"+(n&1)*5);
}