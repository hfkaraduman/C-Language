#include <stdio.h>
 #define BOYUT 10

 int main( )
 {
 int a[ BOYUT ] = { 0, 2, 4, 8, 10, 12, 89, 68, 45, 37 };
 int i, tur, tut;

 printf( "Veriler orjinal s�ras�nda\n" );

 for ( i = 0; i <= BOYUT - 1; i++ )
 printf( "%4d", a[ i ] );

 for ( tur = 1; tur <9; tur++ ) /* turlar */

 	for ( i = 0; i < BOYUT - 1; i++ ) /* bir tur */

		 if ( a[ i ] > a[ i + 1 ] ) { /* bir kar��la�t�rma */
 tut = a[ i ]; /* bir de�i�tirme */
 a[ i ] = a[ i + 1 ];
 a[ i + 1 ] = tut;
 }
printf( "\nVeriler artan s�ralamada \n" );

 for ( i = 0; i < BOYUT ; i++ )
 printf( "%4d", a[ i ] );

 printf( "\n" );

 return 0;
 }
