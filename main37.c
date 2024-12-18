#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char kitap[40];
	printf("Kitap:");
	scanf("%s",kitap);
	printf("%s\n",kitap);
	printf("%20s\n",kitap);
	printf("%20.5s\n",kitap);
	printf("%-38s",kitap);
	
	
	
	
	
	
	return 0;
}
