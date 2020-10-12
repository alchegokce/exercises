#include<stdio.h>


int main()
{	 
	int dizi[5];
	int *po=dizi;
	printf("5 adet deger girin:\n");
	
	for(po; po<dizi+5; po++)
	{
		scanf("%d", po);
	}
	po=dizi+1;
	int min, max;
	min=max=*dizi;
	printf("\nmin=%d\n", *po);
	
	
	for(po; po<dizi+5; po++)
	{
		if(*po>max)
		{
			max=*po;
		}
		
		if(*po<min)
		{
			min=*po;
		}
	}
	
	printf("min=%d\nmax=%d", min, max);
	
	
}
