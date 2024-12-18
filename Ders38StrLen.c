#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*char yazi[100];
	printf("Uzunlugunu istediginiz yazý: ");
	scanf("%s",yazi);
	printf("Girilen Uzunluk: %d\n",strlen(yazi));
	printf("Katar Uzunlugu: %d",strlen("Merhaba Dunya"));
	*/
	char yazi[100];
	printf("yazin:  ");
	gets(yazi);
	printf("%d",strlen(yazi));
	
	
	
	
	
	
	return 0;
}
