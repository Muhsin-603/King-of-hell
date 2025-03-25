#include<stdio.h>
int a[20][20],b[20][20];
void read(int n,int m)
{
//    int n,m;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
}
void t(int n,int m)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            b[i][j]=a[j][i];
        }
    }
}
void print1(int n,int m)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void print2(int n,int m)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter the number of rows and columns\n");
    int n,m;
    scanf("%d %d",&n,&m);
    printf("Enter the elements of the matrix\n");
    read(n,m);
    printf("The matrix is\n");
    print1(n,m);
    printf("The transpose of the matrix is\n");
    t(n,m);
    print2(n,m);
    return 0;
}
