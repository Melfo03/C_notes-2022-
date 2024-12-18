#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
/*	
    char kitapAd[30];
	printf("Kitap Adini Giriniz=  ");
	scanf("%s",kitapAd);
	printf("Kitap Adi: %s",kitapAd);
*/



       char ad[10],soyad[10],bolum[30],yasadigisehir[20];
	   printf("Adiniz=     ");
	   scanf("%s",ad);
	   
	   printf("Soyadiniz=     ");	
	   scanf("%s",soyad);
	   
	   printf("Bolumunuz=   ");
	   scanf("%s",bolum);
	   
	   printf("Yasadiginiz Sehir=   ");
	   scanf("%s",yasadigisehir);
	   
	   printf("Ad:%s\n",ad);
	   printf("Soyad:%s\n",soyad);
	   printf("Bolum:%s\n",bolum);
	   printf("Sehir:%s\n",yasadigisehir);
	   
	   
	   
	return 0;
}
