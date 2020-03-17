#include<stdio.h>
void diziyaz(int[],int);//prototip
int main()
{
	int sayilar[5]={13,12,0,5,8};
	diziyaz(sayilar,5);
	return 0;
}
void diziyaz(int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",b[i]);
}
