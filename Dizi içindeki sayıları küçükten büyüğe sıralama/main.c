#include<stdio.h>
void dizi_goster( int [ ], int );
void kabarcik_siralamasi( int [ ], int );
int main( void )
{
	int i, j;
	int dizi[ 8 ] = { 7, 3, 66, 3, 
			 -5, 22, -77, 2 };

	// Siralama islemi icin fonksiyonu
	// cagriyoruz.
	kabarcik_siralamasi( dizi, 8 );
	// Sonucu gostermesi icin dizi_gosteri
	// calistiriyoruz.
	dizi_goster( dizi, 8 );
	return 0;
}
// Dizi elemanlarini gostermek icin yazilmis 
// bir fonksiyondur. 
void dizi_goster( int dizi[ ], int boyut )
{
	int i;
	for( i = 0; i < boyut; i++ ) {
		printf("%d ",dizi[i]);
	}
	printf("\n");
}
// Bubble Sort algoritmasina gore, siralama islemi 
// yapar.
void kabarcik_siralamasi( int dizi[ ], int boyut )
{
	int i, j, yedek;
	// Ilk dongu asama sayisini temsil ediyor. 
	// Bu donguye gore, ornegin boyutu 8 olan 
	// bir dizi icin 7 asama gerceklesir.
	for(i=1;i<boyut;i++)
	 for(j=0;j<boyut-1;j++)
	  if(dizi[j]>dizi[j+1])
	     {
	     	yedek=dizi[j];
	     	dizi[j]=dizi[j+1];
	     	dizi[j+1]=yedek;
	     }
}

		


