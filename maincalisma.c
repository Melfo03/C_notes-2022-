#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*80 – 100 aralýðýnda ise = A, 60 – 80 aralýðýnda ise = B, 40 – 60 aralýðýnda ise = C, 0– 40 aralýðýnda ise = D. Yazan programý yazýnýz.*/
	int x,y,sonuc,islem;
	printf("sayi 1 giriniz:");
	scanf("%d",&x);
	
	printf("sayi 2 giriniz:");
	scanf("%d",&y);
	printf("islem seciniz:");
	scanf("%d",&islem);
	
		switch(islem)
	 {
	 	case 1:sonuc=x+y;
	 	printf("sonuc:%d",sonuc);
	 	break;
	 	
	 	case 2:sonuc=x*y;
	 	printf("sonuc:%d",sonuc);
	 }
	
	
	
	
	
	
	
	
	
	return 0;
}
