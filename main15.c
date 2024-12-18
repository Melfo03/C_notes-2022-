#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {


/*	char ders;
	printf("Kod Giriniz:"),
	scanf("%s",&ders);
	switch(ders)
	{
		case't':printf("Turkce");
		break;
		case'm':printf("mat");
		break;
		default:printf("Hatali Deger");
	}
*/

    int sayi1,sayi2,sonuc;
    char smbol;
    sayi1=50;
    sayi2=5;
    printf("Islem Seciniz: \n");
    scanf("%s",&smbol);
    switch(smbol)
{
	case'*':sonuc=sayi1*sayi2;
	        printf("Sonuc:%d",sonuc);
	        break;
	case'/':sonuc=sayi1/sayi2;
	        printf("Sonuc:%d",sonuc);
			break;
			
	default:printf("Hatali Secim:");		        
	
	
	
	
}
      


	
	
	
	
	
	
	return 0;
}
