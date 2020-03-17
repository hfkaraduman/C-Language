#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b,c;
	printf("3 adet sayi giriniz:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("Girilen sayilarin en buyugu:%d",a);
	}
	else if(b>a && b>c)
	{
		printf("Girilen sayilarin en buyugu:%d",b);
	}
	else
	{
		printf("Girilen sayilarin en buyugu:%d",c);
	}
	return 0;
}
