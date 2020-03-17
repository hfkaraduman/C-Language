#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayac;
	BASLA:
	
		sayac=sayac+1;
		if(sayac<=10)
			printf("Hasan\n");
		goto BASLA;
	return 0;
}
