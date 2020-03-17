#include <stdio.h>
#include <stdlib.h>



int main()
{
	int sinif[5];
	int i;
	int toplam=0;
	int ortalama;
	
	printf("Notlari giriniz");
	for(i=0;i<5;i++)
	{
    scanf("%d",&sinif[i]);
	toplam=toplam+sinif[i];
	}
	
    printf("toplam%d\n",toplam);
	ortalama=toplam/5;
	printf("Sinifin ortalamasi:%d\n",ortalama);
	
	printf("ortalamdan yüksek olan notlar:\n");
	for(i=0;i<5;i++)
	  if(sinif[i]>ortalama)
	    printf("%d\n",sinif[i]);

	
	return 0;
}
