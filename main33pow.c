#include <stdio.h>
#include <stdlib.h>
//pow(x,y)=�s alma
  int main() {
/*	int x,y;
	int sonuc;
	printf("taban giriniz:");
	scanf("%d",&x);
	
	printf("Us:  ");
	scanf("%d",&y);
	sonuc=pow(x,y);
	printf("Sonuc: %d ",sonuc);
	*/
//floor(sayi)=Alt De�ere Yuvarla  ceil(sayi)=�st De�ere Yuvarla
/*	double sayi,sonuc1,sonuc2;
	printf("de�eri giriniz  ");
	scanf("%lf",&sayi);
	sonuc1=floor(sayi);
	sonuc2=ceil(sayi);
	printf("Sonuc: %.3lf\n",sonuc1);
	printf("Sonuc:  %.2lf",sonuc2);
*/	
// fabs(sayi)=Mutlak De�er Bulma 
 /*   double sayi,sonuc;
    printf("sayi giriniz: ");
    scanf("%lf",&sayi);
    sonuc=fabs(sayi);
    printf("Sonuc: %.2lf",sonuc);
   */
//log(sayi)=logartima Alma  
 /*  double sayi,sonuc;
   printf("sayi giriniz:  ");
   scanf("%lf",&sayi);
   sonuc=log(sayi);
   printf("sonuc log: %lf",sonuc); 
  */
  
  double derece,sonucsin,sonuccos;
  printf("Derece Giriniz:  ");
  scanf("%lf",&derece);
  sonucsin=sin(derece);
  sonuccos=cos(derece);
  printf("sin: %lf\n",sonucsin);
  printf("cos:  %lf",sonuccos);
  
  
    

	
	
	
	
	
	return 0;
}
