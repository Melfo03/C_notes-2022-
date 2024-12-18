#include <stdio.h>
#include <stdlib.h>


 void dortgen(int kisa,int uzun)
 {
 	int i,j;
 	for(i=0;i<kisa;i++)
 	{
 		if(i==0 || i==kisa-1)
 		{
		 
 		for(j=0;j<uzun;j++)
 		  {
 			printf("*");
		  }
		 printf("\n");
	    }
	    else
	    {
	    	for(j=0;j<uzun;j++)
	    	{
	    		if(j==0 || j==uzun-1)
	    		{
	    			printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	 }
	 printf("\n");
 }
int main() {
	
int a,b;
printf("Uzun Kenar: ");
scanf("%d",&a);
printf("Kisa Kenar: ");
scanf("%d",&b);
dortgen(b,a);

	
	
	
	
	
	
	
	return 0;
}




















  /*int kup(int s1)
{
	int s3;
	s3=s1*s1*s1;
	return s3;
}



int main() {
	
	int a;
	printf("Sayi:");
	scanf("%d",&a);
	printf("%d",kup(a));
	
	
	
	
	
	return 0;
}*/
