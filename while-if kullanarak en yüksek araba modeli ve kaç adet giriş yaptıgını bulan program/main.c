#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int model,enyeni,adet=0;
	printf("Model yilini giriniz   (Durdurmak icin 0):");
	scanf("%d",&model);
    enyeni=model;
    
    while(model!=0)
    {
    	if(enyeni<=model)
    	{
    		
    		enyeni=model;
    		adet=adet+1;
    		
    	}
    	
   	printf("Model yilini giriniz   (Durdurmak icin 0):");
	scanf("%d",&model);
    }
    
    
    printf("En yeni model %d (toplam %d adet giris yapti)",enyeni,adet);
	
	return 0;
}
