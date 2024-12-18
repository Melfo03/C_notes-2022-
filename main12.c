#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c,i;
    a=1;
    b=1;
    printf("%d\n%d\n",a,b);
    for(i=1;i<=8;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
