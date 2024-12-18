#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char sehir[4][10];
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("%d.Sehri Giriniz: \n",i+1);
		scanf("%s",&sehir[i]);
	}
	printf("\n \n");
	for(i=0;i<4;i++)
	{
		
		printf("%s\n",sehir[i]);
	}
	
	
	
	
/*	int dizi[100];
	int i,sayi,toplam;
	toplam=0;
	printf("Eleman sayisi giriniz:    ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d.degerini giriniz   ",i+1);
		scanf("%d",&dizi[i]);
		
	}

	
	 for(i=0;i<sayi;i++)
	 {
	 	toplam=toplam+dizi[i];
	 }
	
	printf("toplam: %d  ",toplam);
*/	
	return 0;
}
