#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int vize,final,ortalama;
	printf("Vize notunuzu giriniz:");scanf("%d",&vize);
	printf("Final notunuzu giriniz:");scanf("%d",&final);
	ortalama=(vize*0.4)+(final*0.6);
	printf("-------------------------\n");
	printf("Basari ortalamaniz:%d\n",ortalama);
	if(ortalama<50)
	{
		printf("F");
	}
	else if(ortalama>=50 && ortalama<=59)
	{
		printf("D");
	}
	else if(ortalama>=60 && ortalama<=69)
	{
		printf("C");
	}
	else if(ortalama>=70 && ortalama<=79)
	{
		printf("B");
	}
	else 
	{
		printf("A");
	}
	return 0;
}
