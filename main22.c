#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
/*	
int i,j,k,l;
printf("En Degerini Giriniz:   ");
scanf("%d",&l);
printf("Boy Degerini Giriniz:   ");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
   for(j=1;j<=l;j++)
   {
   	printf("*");
   }
   printf("\n");
}
*/
/*
int a,b,c,d;
printf("Ucgenin Boyutunu Giriniz: ");
scanf("%d",&c);
for(a=1;a<=c;a++)
{
	for(b=5;b>=0;b--)
	{
		printf("*");
	}
	
	printf("\n");
*/


  int i,j,k,l;
  for(i=1;i<=5;i++)
  {
  	for(j=1;j<=5-i;j++)
  	{
  		printf(" ");
	  }
	  for(k=1;k<=i;k++)
	  {
	  	printf("*");
	  }
	  printf("\n");
  }


	
	










	return 0;
}
