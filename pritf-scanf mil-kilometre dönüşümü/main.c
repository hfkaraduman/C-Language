#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float mil,kilometre;
	printf("Mil olarak uzaklik=");scanf("%f",&mil);
	printf("-------------------------\n");
	kilometre=mil*1.609;
	printf("Girilen %3.2f mil,%3.2f km dir",mil,kilometre);
	
   	
	return 0;
}
