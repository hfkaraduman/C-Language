#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi,onlar,birler;
	scanf("%d",&sayi);
	birler=sayi%10;
	onlar=sayi/10;
	
	
		switch(onlar)
	{
			case 1:
		printf("X");
		break;
		case 2:
		printf("XX");
		break;
		case 3:
	    printf("XXX");
	    break;
	    case 4:
	    printf("IL");
	    break;
	    case 5:
	    printf("L");
	    break;
	    case 6:
	    printf("LI");
	    break;
	    case 7:
	    printf("LII");
	    break;
	    case 8:
	    printf("LIII");
	    break;
	    case 9:
	    printf("XC");
	    break;
	}
	
	switch(birler)
	{
		case 1:
		printf("I");
		break;
		case 2:
		printf("II");
		break;
		case 3:
	    printf("III");
	    break;
	    case 4:
	    printf("IV");
	    break;
	    case 5:
	    printf("V");
	    break;
	    case 6:
	    printf("VI");
	    break;
	    case 7:
	    printf("VII");
	    break;
	    case 8:
	    printf("VIII");
	    break;
	    case 9:
	    printf("IX");
	    break;
	}

}
    
		


