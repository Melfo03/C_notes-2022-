#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
/*	
	int sayi;
	printf("Bir Sayi Giriniz:  ");
	scanf("%d",&sayi);
	printf("Girmiþ oldugunuz sayi: %d",sayi);


*/	
/*
	
	int sayi1,sayi2,toplam,fark,carpim;
	
	printf("Sayi1 Giriniz:  ");
	scanf("%d",&sayi1);
	
	printf("Sayi2 Giriniz:  ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	
	
	printf("toplam:  %d\n",toplam);
	 printf("fark:   %d\n",fark);
	 printf("çarpim:  %d",carpim);
	
*/	
	/*
        int kenar1,kenar2,alan,cevre;
        
        printf("DIKDORTGEN ALAN HESAPLAYICISI\n\n\n\n");
        
        printf("Kisa Kenar Giriniz:   ");
        scanf("%d",&kenar1);
        
        printf("Uzun Kenar Giriniz:   ");
        scanf("%d",&kenar2);
        
        alan=kenar1*kenar2;
        cevre=(2*kenar1)+(2*kenar2);
        
        printf("Dikdörtgenin Alaný:  %d\n",alan);
        printf("Dikdörtgenin Çevresi: %d",cevre);

*/
       
       
   //Mýsýr=2tl SU=1tl kola=2tl Bilet=8tl//
   
     int misir,misiradet,su,suadet,kola,kolaadet,bilet,biletadet,odeme;
     
     printf("****SINEMA ODEME SYSTEM****\n\n\n\n");
     
     misir=2,su=1,kola=2,bilet=8;
     
     printf("Aldiginiz Misir Adetini Yaziniz:  ");
     scanf("%d",&misiradet);
     
     printf("Aldiginiz Su Adetini Yaziniz:  ");
     scanf("%d",&suadet);

     printf("Aldiginiz Kola Adetini Yaziniz:  ");
    scanf("%d,",&kolaadet);
    
    printf("Aldiginiz Bilet Adetini Yaziniz:  ");
    scanf("%d",&biletadet);

    odeme=misir*misiradet+su*suadet+kola*kolaadet+bilet*biletadet;
    
     printf("Toplam Odenecek Tutar:   %d",odeme);
     printf("TL	");


 


 
  
















	
	
	return 0;
}
