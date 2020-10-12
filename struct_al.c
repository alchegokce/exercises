#include<stdio.h>

struct student{
	
	int no;
	char answers[10];
	
};

struct marks{
	
	int no;
	float mark;
};


int main()
{
	// 4 ÞIKLI SINAVDA ÖÐRENCÝLERÝN ALDIÐI NOTLARI VE UMARALARI BASTIRIR
	// NUMARALARI VE ÞIKLARI RANDOM ALDIM
	
	struct student std[30];
	struct marks mrk[30];
	char key[10];
	int i,j;


	
	for(i=0; i<30; i++)
	{
		std[i].no = rand()%1000;	
		mrk[i].no = rand()%1000;	
	}
	
	
	
	for(i=0; i<30; i++)
	{
		for(j=0; j<10; j++)
		{
			std[i].answers[j]=rand()%4+'A';
			printf("%c ", std[i].answers[j]);
		}
		printf("\n");
	}
	
	for(i=0; i<10; i++)
	{
		key[i]=rand()%4+'A';
		printf("%c\n", key[i]);
	}
	
	
	for(i=0; i<30; i++)
	{
		for(j=0; j<10; j++)
		{
			if(key[j]==std[i].answers[j])
			{
				mrk[i].mark+=1;	
			}
			else
			{
				mrk[i].mark-=0.25;
			}
		}
	}
	
	for(i=0; i<30; i++)
	{
		printf("std no: %d\tmark: %f\n", mrk[i].no, mrk[i].mark);
	}	
	
}










