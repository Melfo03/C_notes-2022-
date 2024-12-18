#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dizi[2][2];
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	
	printf("%d ",dizi[0][0]);
	printf("%d\n",dizi[0][1]);
	printf("%d ",dizi[1][0]);
	printf("%d",dizi[1][1]);
	
	return 0;
}
