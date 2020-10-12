#include<stdio.h>

int main()
{
	//  i j = (i-1)j + (i-1)(j-1)
	int i, j;
	int n=0;
	printf("KAC SUTUN GIRMEK ISTIYORSUNUZ? ");
	scanf("%d", &n);
	int dizi[n][n];
	printf("\n\np ");
	for(i=0; i<n; i++)
	{
		printf("%4d", i);
	}
	printf("\nn\n");
	for(i=0; i<=n; i++)
	{
		printf("----");
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		
		dizi[i][i]=1;
		dizi[i][0]=1;
		for(j=1; j<i; j++)
		{
			dizi[i][j]=dizi[i-1][j]+dizi[i-1][j-1];	
			
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		if(i<10)
		{
			printf(" %d --", i);	
		}
		else
		{
			printf("%d --", i);	
		}
		
		for(j=0;j<=i; j++)
		{
			printf("%4d", dizi[i][j]);
		}
		printf("\n");
	}
	
	
	
	
}
