#include<stdio.h>
float maksimum_bul( float [ ], int );
float minimum_bul( float [ ], int );
float ortalama_bul( float [ ], int );
int main( void )
{
	// 8 boyutlu bir dizi olusturup buna 
	// keyfi degerler atiyoruz.
	float sayilar[ 8 ] = {  12.36, 4.715, 6.41, 13,
				1.414, 1.732, 2.236, 2.645 };
	float max, min, ortalama;
	// Ornek olmasi acisindan fonksiyonlar 
	// kullaniliyor.
	max = maksimum_bul( sayilar, 8 );
	min = minimum_bul( sayilar, 8 );
	ortalama = ortalama_bul( sayilar, 8 );
	printf( "Maksimum: %.2f\n", max );
	printf( "Minimum: %.2f\n", min );
	printf( "Ortalama: %.2f\n", ortalama );

	return 0;
}
/* Dizi icindeki maksimum degeri bulur */
float maksimum_bul( float dizi[ ], int eleman_sayisi )
{
	int i, max;
	max = dizi[0];
	for( i = 1; i < eleman_sayisi; i++ ) {
		if( max < dizi[ i ] )
			max = dizi[ i ];
	}
	return max;
}
/* Dizi icindeki minimum degeri bulur */ 
float minimum_bul( float dizi[ ], int eleman_sayisi )
{
	int i, min;
	min = dizi[ 0 ];
	for( i = 1; i < eleman_sayisi; i++ ) {
		if( min > dizi[ i ] ) {
			min = dizi[ i ];
		}
	}
	return min;
}
/* Dizi elemanlarinin ortalamasini bulur */
float ortalama_bul( float dizi[ ], int eleman_sayisi )
{
	int i, ortalama = 0;
	for( i = 0; i < eleman_sayisi; i++ )
		ortalama += dizi[ i ];

	return ortalama / 8.0;
}
