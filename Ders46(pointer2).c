#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi=20;
	int *s=&sayi;
	
	//Say�y� Ekrana Yazd�rma
	printf("Deger: %d\n",sayi);
	//Adresi Ekrana Yazd�rma
	printf("Adres: %x\n",s);
	
	char harf='a';
	char *h=&harf;
	printf("\n\n------------\n\n");
	//Harfi Ekrana Yazd�rma
	
	printf("Harf: %c\n",harf);
	printf("Adres: %x",h);
	
	
	return 0;
}
