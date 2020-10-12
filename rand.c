#include<stdio.h>

void del(int A[], int size, int uw);

int main()
{
	//DÝZÝDEKÝ ÝSTENMEYEN ELEMANI SÝLER
	int n=0;
	int x=0;
	printf("define the size of array:\n");
	scanf("%d", &n);
	int arr[n];
	int i;
	srand(time(NULL));
	for(i=0; i<n; i++)
	{
		arr[i]=rand()%50;
		printf("%d. value: %d\n", i+1, arr[i]);
	}
	
	printf("which value you want to delete?\n");	
	scanf("%d", &x-1);
	del(arr, n, x-1);

}

void del(int A[], int size, int uw)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(A[i]!=A[uw])
		{
			printf("%d\n", A[i]);
		}
		else if(A[i]==A[uw])
		{
			printf("");
		}
	}
}
