#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dizi1[5];
int n,*ptr,enb;
ptr=&dizi1[0];
for (n=0;n<5;n++)
{
 printf("bir say� giriniz: ");
 scanf("%d",&*(ptr+n));
}
enb=*ptr;
for (n=0; n<5; n++)
if (enb<*(ptr+n)) enb=*(ptr+n);
printf("en b�y�k de�er: %d\n",enb);
	return 0;
}
