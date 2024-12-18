#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi=20;
	int *s=&sayi;
	
	//Sayýyý Ekrana Yazdýrma
	printf("Deger: %d\n",sayi);
	//Adresi Ekrana Yazdýrma
	printf("Adres: %x\n",s);
	
	char harf='a';
	char *h=&harf;
	printf("\n\n------------\n\n");
	//Harfi Ekrana Yazdýrma
	
	printf("Harf: %c\n",harf);
	printf("Adres: %x",h);
	
	
	return 0;
}
