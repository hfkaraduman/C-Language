#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
  long toplam=0;
  int ogrenciSayisi=0;
  int notu;
  float ortalama;
  
  printf("Notu giriniz   (sonlandirmak icin -1):");
  scanf("%d",&notu);
  
  while(notu !=-1)
  {
  	toplam=toplam+notu;
  	ogrenciSayisi=ogrenciSayisi+1;
  	
  	printf("Notu giriniz   (sonlandirmak icin -1):");
  	scanf("%d",&notu);
  }
  
  if(ogrenciSayisi !=0)
  {
  	ortalama=toplam/ogrenciSayisi;
  	printf("Ortalam:%5.2f",ortalama);
  }
	
	
	
	
	
	return 0;
}
