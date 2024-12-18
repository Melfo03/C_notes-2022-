#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int toplam(int s1,int s2)
{
	int s3;
	s3=s1+s2;
	return s3;
}

int main() {

  int t,a,b;
  printf("sayi1:  ");
  scanf("%d",&a);
  printf("sayi2:   ");
  scanf("%d",&b);
  
  t=toplam(a,b);
  printf("%d",t);





	
	return 0;
}
