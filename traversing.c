#include<stdio.h>
int main()
{
    int a[20],n,i;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter the key : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("The Element is found at the position %d ",++i);//for correct real number position
        }

    }
return 0;
}
