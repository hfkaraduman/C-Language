#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char cinsiyet;
	int kilo;
	float boy,kid,eik,cm,kalancm,ecmm,kcmm,shcm;
	printf("Cinsiyet giriniz  (e-k):");scanf("%s",&cinsiyet);
	printf("Boyunuz   (m):");scanf("%f",&boy);
	printf("Kilonuz   (kg):");scanf("%d",&kilo);
	printf("-------------------------\n");
	kalancm=boy-1.5;
	cm=kalancm*100;
	shcm=cm/2.5;
	
	kcmm=(45)+(shcm*2.2);
	ecmm=(48)+(shcm*2.7);
	if(cinsiyet='k' && kilo>kcmm)
	{
	    printf("Ýdeal kilonuz:%2.2f\n",kcmm);
		printf("Ýdeal kilonuzdan daha agirsiniz\n");
    }
	else if(cinsiyet='k' && kilo<kcmm)
    {
     	printf("Ýdeal kilonuz:%2.2f\n",kcmm);
     	printf("Ýdeal kilonuzdan hafifsiniz\n");
    }
    else if(cinsiyet='e' && kilo>ecmm)
     {
        printf("Ýdeal kilonuz:%2.2f\n",ecmm);
        printf("Ýdeal kilonuzdan agirsiniz\n");
    }
    else if(cinsiyet='e' && kilo<ecmm)
    {
    	printf("Ýdeal kilonuz:%2.2f\n",ecmm);
    	printf("Ýdeal kilonuzdan hafifsiniz\n");
    	
    }
	        
		
			
		
	
	
	
	
	return 0;
}
