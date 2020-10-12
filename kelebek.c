#include<stdio.h>

void kelebek(int n);

int main()
{
	/* 
		ÖRNEK ÇIKTI
		N=4
	  ******* 
	   *****
		***
		 *
		 *
		***
	   *****
	  *******  	 
	*/
	int n=0;
	printf("satir sayisi girin:\n");
	scanf("%d", &n);
	kelebek(n);
}

void kelebek(int n)
{
	int i, j;
	int a=n;
	int b=n;
	int c=1;
	for(i=0; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		for(j=0; j<(2*a-1); j++)
		{
			printf("*");
			
		}
		a--;
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<(b-1); j++)
		{
			printf(" ");
		}
		
		for(j=0; j<(2*c-1); j++)
		{
			printf("*");
		}
		b--;
		c++;
		printf("\n");
	}
	
}


