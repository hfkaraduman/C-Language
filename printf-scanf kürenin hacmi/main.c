#include <stdio.h>
#define PI 3.14
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int cap,yaricap;
	float hacim;
	
	
	printf("Capi giriniz  (cm):\n");scanf("%d",&cap);
    yaricap=cap/2;
	printf("Girdi degerleri:yaricap=%d\n",yaricap);
	
	hacim=(4*PI*yaricap*yaricap*yaricap)/3;
	
	printf("Kürenin hacmi:%4.2ftür",hacim);
	
	
	return 0;
}
