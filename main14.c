#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
/*	int i,x;
	i=1;
	
	while(i<=20)
	{
		
		if(i==14)
		{
			i++;
		}
		else(i%2==0);
		{
			printf("%d\n",i);
			
		}
		
		i++;
	}
	
	*/
	
	int x,faktor,sonuc;
	printf("Deger Girin:  ");
	scanf("%d",&x);
	faktor=1;
	sonuc=1;
	while(faktor<=x)
	{
		sonuc=faktor*sonuc;
		faktor++;
	}
	
	printf("Sonuc: %d\n",sonuc);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
