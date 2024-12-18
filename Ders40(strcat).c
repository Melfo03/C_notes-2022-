#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kitap[15],yazar[30],kitapyazar[45];
	printf("Kitap Adý Giriniz: ");
	gets(kitap);
	printf("Yazar Adý Giriniz:  ");
	gets(yazar);
	printf("%s",kitap);
	strcat(kitapyazar,kitap);
	strcat(kitapyazar," ");
	strcat(kitapyazar,yazar);
	printf("%s",kitapyazar);
	
	
	
	
	return 0;
}
