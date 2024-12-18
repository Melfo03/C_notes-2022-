#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
/*	int sayac,i;
	sayac=0;

	
	for(i=1;i<=10;i++)
	{
		sayac=i+sayac;
		
		
	}
	printf("Sayýnýz %d",sayac);
*/	
	
/*	
	int i,faktor;
	faktor=1;
	for(i=1;i<=5;i++)
	{
		
		faktor=i*faktor;
	  }
	
	
	printf("sonuc: %d",faktor);
	
*/
 
   int i,sayi,faktor;
   
   printf("sayi giriniz:\n");
   scanf("%d",&sayi);
   faktor=1;
   for(i=1;i<=sayi;i++)	
	{
		faktor=i*faktor;
	}
	printf("Degeriniz:%d",faktor);
	
	
	return 0;
}
