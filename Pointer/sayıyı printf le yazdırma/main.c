#include<stdio.h>
int main()
{
	int a;
	int *aptr=&a;
	a=7;
	
	printf("a'nin adresi:%p"
	   		"\naptr degiskeninin degeri:%p",&a,aptr);
	printf("\na'nin degeri:%d"
			"\n*aptr degiskeninin degeri:%d",a,*aptr);   		
}
