#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b,c;
	printf("3 adet sayi giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d",a);
	}
	else if(b>a && b>c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
}
