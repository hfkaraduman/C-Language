#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int dizi1[10]={0,1,2,3,4,5,6,7,8,9};
	float dizi2[10]={.0,.1,.2,.3,.4,.5,.6,.7,.8,.9};
	
	int *iPtr=dizi1;
	float *jPtr=dizi2;
	
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\t  %f\n", *iPtr++,*jPtr++);
		
	}
	return 0;
}
