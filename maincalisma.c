#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*80 � 100 aral���nda ise = A, 60 � 80 aral���nda ise = B, 40 � 60 aral���nda ise = C, 0� 40 aral���nda ise = D. Yazan program� yaz�n�z.*/
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
