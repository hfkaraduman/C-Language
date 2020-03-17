#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void karakter_yazdir(const char *);

int main(int argc, char *argv[]) {
	char string[]="string karakterlerini yaz";
	karakter_yazdir(string);
	return 0;
}

void karakter_yazdir(const char *dizi)
{
	for(;*dizi!='\0';dizi++)
	{
		printf("%c",*dizi);
	}
}
