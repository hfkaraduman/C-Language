#include <stdio.h>
#include <stdlib.h>


int ara(int x[],int y);

int main()
{
	int aranacak,bulunan;
	int dizi[];
	scanf("%d",&aranacak);
	bulunan=ara(dizi,aranacak);
	if(bulunan!=0)
	{
			printf("%d sayisi dizide %d adet bulundu",aranacak,bulunan);	
	}
	else
	{
		printf("Deger bulunamadi");	
	}
	
	
	
	

}
int ara(int x[],int y)
{
	int i,adet=0;
	for(i=0;i<SIZE;i++)
	{
		if(x[i]==y)
		{
			adet++;	
		}
	}
	return adet;
}


