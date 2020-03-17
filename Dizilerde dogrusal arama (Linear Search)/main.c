#include<stdio.h>
int main()
{
	int n[5]={13,12,0,5,8};
	int i;
	int aranacak;
	int yer=-1;
	
    printf("Aranacak olan elemaný giriniz:");
	scanf("%d",&aranacak);
	
	for(i=0;i<5;i++)
	 if(n[i]==aranacak)
	   yer=i;
	 
	if(yer!=-1)
	printf("Aranan eleman dizinin %d. indisinde yer almaktadir.",yer);
	else
	printf("Dizide boyle bir eleman bulunmamaktadir");
	return 0;
  
}
