#include<stdio.h>
#include<string.h>
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
 getchar();
 scanf("%[^\n]s",h[i].ads);
 printf("Enter The Hotel Grade : ");
 scanf("%d",&h[i].g);
 printf("Enter The No of Rooms Available : ");
 scanf("%d",&h[i].nor);
 printf("Enter The Average Room Price : ");
 scanf("%f",&h[i].avc);
 printf("\n\n");
}

void sort(int n)
{
 int i,j;
 struct hotel temp;
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(h[j].g<h[j+1].g)
   {
    temp=h[j];
    h[j]=h[j+1];
    h[j+1]=temp;
   }
  }
 }
}
void g_search(int gs,int n)
{
int i,f=0;
printf("The Grade %d Hotels are : \n",gs);
for(i=0;i<n;i++)
{
 if(h[i].g==gs)
 { 
  printf("Your Hotels Are : %s\n",h[i].n);
  f=1;
 }
}
if(f==0)
{
printf("There Are No Hotels With This Grade");
}
}

void print(struct hotel h1)
{
 printf("Hotel Name : %s\n",h1.n);
 printf("Hotel Address : %s\n",h1.ads);
 printf("Hotel Grade : %d\n",h1.g);
 printf("No of Rooms Available : %d\n",h1.nor);
 printf("Average Room Price : %f\n",h1.avc);
}

int main()
{
int n,i,gs;
char c[10];
printf("Enter The No of Hotels : ");
scanf("%d",&n);
for(i=0;i<n;i++)
 details(i);
sort(n);
printf("Do you Want To List the hotels ? yes or no: ");
scanf("%s",c);
if(strcmp(c,"yes")==0)
{
 for(i=0;i<n;i++)
 {
  print(h[i]);
 }
}
else if(strcmp(c,"no")==0)
 printf("\tOK");
printf("What Grade of Hotel are you Lokking for Ranging From 1~5 : ");
scanf("%d",&gs);
g_search(gs,n);

}
