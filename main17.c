#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	
	int sayilar[]={10,20,30,40,50,60,70};
	int i;
	for(i=0;i<7;i++)
	 {
	 	printf("%d \n",sayilar[i]);
	 }
	
*/

  int i,toplam,sayilar[]={10,20,30,40};
  toplam=0;
  for(i=0;i<4;i++)
  {
  	 toplam=toplam+sayilar[i];
  	 
  	
	  }	
	
	printf("%d",toplam);
	
	
	return 0;
}
