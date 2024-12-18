#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int satir,sutun;
	printf("satir sayisi giriniz: ");
	scanf("%d",&satir);
	printf("sutun sayisi giriniz:  ");
	scanf("%d",&sutun);
	int dizi[satir][sutun];
	int i,j,k,l;
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("[%d][%d]= ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
		
	}
	for(k=0;k<satir;k++)
	{
		for(l=0;l<sutun;l++)
		{
			printf("%d ",dizi[k][l]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
