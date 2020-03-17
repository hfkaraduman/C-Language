#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int a;
	printf("Bir sayi giriniz:\n");scanf("%d",&a);
	int *aptr;
	aptr=&a;
	printf("Girilen sayi",*aptr);
	return 0;
}
