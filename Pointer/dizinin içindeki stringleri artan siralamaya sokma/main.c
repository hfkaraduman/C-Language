#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void karsilastir(int *,const int);
int main(int argc, char *argv[]) 
{
	int dizi[10]={9,8,7,6,5,4,3,2,1,0,};
	int i;
	printf("Veriler orjinal sirada:\n");
	for(i=0;i<=BOYUT-1;i++)
	{
		printf("%d\t",dizi[i]);
	}
	printf("Veiriler artan sirada:\n");
	karsilastir(dizi,BOYUT);
	for(i=0;i<=BOYUT-1;i++)
	{
		printf("%d\t",dizi[i]);
	}
	
	return 0;
}
void karsilastir(int * aptr,const int boyut)
{
	int i,j;
	void yerdegistir(int *,int *);
	for(i=0;i<=BOYUT;i++)
    {
    	for(j=0;j<BOYUT-1;j++)
    	{
    		if(aptr[j]>aptr[j+1])
    		{
    			yerdegistir(&aptr[j],&aptr[j+1]);
			}
		}
	}
    
}
void yerdegistir(int * sptr1,int * sptr2)
	{
		int yedek=*sptr1;
		*sptr1=*sptr2;
		*sptr2=yedek;
		
	} 
