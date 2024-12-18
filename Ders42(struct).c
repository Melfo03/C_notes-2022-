#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct kitapbilgi
{
	
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;
};



int main() {

struct kitapbilgi kb ={"SekerPortakali","Vasconceulos",10,7.25};
printf("Kitap Ad: %s\n",kb.kitapad);
printf("Yazar: %s\n",kb.yazar);
printf("Fiyat: %d\n",kb.fiyat);
printf("Puan: %f",kb.puan);	
	
	
	
	
	
	return 0;
}
