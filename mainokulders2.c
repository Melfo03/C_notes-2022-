#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

/*
	int x=0,toplam=0;
	while(x<=10)
	{
		toplam=toplam+x;
		x++;
	}
	printf("\nsonuc= %d\n",toplam);
	*/
	
/*	
	int i=1,son,t=0;
	printf("Kaca Kadar Toplansýn? ");
	scanf("%d",&son);
	while(i<=son);
	{
		t=t+i;
		i++;
		
		
		
	}
	
	printf("\n toplam=%d \n",t);
	*/
	
	
	int x=1,son,toplamc=0,toplamt=0;
	printf("Hangi sayiya kadar islem:  ");
	scanf("%d",&son);
	while(x<=son)
	{
		if(x%2==0)
		{
			toplamc=toplamc+x;
			
		}
		
		else toplamt=toplamt+x;
		x++;
		
		
	}
	
	printf("\nsonuc tek= %d \n",toplamt);
	printf("\nsonuc cift= %d \n",toplamc);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
