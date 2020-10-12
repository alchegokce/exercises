#include<stdio.h>

int bolme(int bolunen, int bolen);

int main()
{
	// recursive bolme islemi
	int a=0,b=0;
	printf("boluneni girin:\n");
	scanf("%d", &a);
	printf("boleni girin:\n");
	scanf("%d", &b);
	bolme(a,b);
	printf("bolum = %d\n", bolme(a,b));
	printf("kalan = %d", a - (bolme(a,b)*b) );
	
}


int bolme(int bolunen, int bolen)
{
	if(bolunen<bolen)
	{
		return 0;
	}
	
	else if(bolen==0)
	{
		return 0;
	}
	
	else
	{
		return (1+bolme(bolunen-bolen,bolen));
	}
	
}












