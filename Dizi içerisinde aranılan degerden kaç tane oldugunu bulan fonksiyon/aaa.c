#include<stdio.h>
int kactane(int[],int,int);//prototip
int main()
{
	int a[10]={13,12,0,5,13,13,12,-1,4,7};
	int adet;
	int aranacak=13;
	
	adet=kactane(a,10,aranacak);
	printf("%d den dizide %d tane vardir",13,adet);
	return 0;
}
int kactane(int b[],int n,int aranacak)
{
	int i,adet=0;
	for(i=0;i<n;i++)
	 if(b[i]==aranacak)
	  adet++;
	return adet;  

}
