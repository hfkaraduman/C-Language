#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi;
	int max;
	int min;
		printf("Sayi (sonlandirmaki�in negatif):");
		scanf("%d",&sayi);
	max=sayi;
	min=sayi;
	while(sayi>0)
	{
		if(sayi>max)
		 max=sayi;
		if(sayi<min)
		 min=sayi;
		printf("Sayi (sonlandirmaki�in negatif):");scanf("%d",&sayi);
	}
	printf("\n");
	printf("Girilen en b�y�g�=%d\n",max);
	printf("Girilen en k�c�g�=%d\n",min);
	return 0;
}
