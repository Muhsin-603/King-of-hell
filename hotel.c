#include<stdio.h>
struct hotel
{
 char n[20];
 char ads[100];
 int g;
 float avc;
 int nor;
}h[10];
void details(int i)
{
 printf("Enter The Hotel Name : ");
 scanf("%s",h[i].n);
 printf("Enter The Hotel Address :\t");
 scanf("%s",h[i].ads);
 printf("Enter The Hotel Grade : ");
 scanf("%d",&h[i].g);
 printf("Enter The No of Rooms Available : ");
 scanf("%d",&h[i].nor);
 printf("Enter The Average Room Price : ");
 scanf("%f",&h[i].avc);
}
void g_search(int gs,int n)
{
int i,f=0;
printf("The Grade %d Hotels are : \n",gs);
for(i=0;i<=n;i++)
{
 if(h[i].g==gs)
  printf("%s",h[i].n);
  f=1;
}
if(f==0)
{
printf("There Are No Hotels With This Grade");
}
}

int main()
{
int n,i,gs;
printf("Enter The No of Hotels : ");
scanf("%d",&n);
for(i=0;i<=(n-1);i++)
 details(i);
printf("What Grade of Hotel are you Lokking for Ranging From 1~5 : ");
scanf("%d",&gs);
g_search(gs,n);
}
