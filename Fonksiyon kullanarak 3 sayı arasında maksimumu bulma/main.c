 #include <stdio.h>
 int maksimum( int, int, int ); /*fonksiyon prototipi*/
 int main( )
 {
 int a, b, c;
 printf( "3 tamsay� giriniz: " );
 scanf( "%d%d%d", &a, &b, &c );
 printf( "Maksimum : %d dir.\n", maksimum( a, b, c ) );
 return 0;
 }
 /*maksimum fonksiyonunun tan�m�*/
 int maksimum( int x, int y, int z )
 {
 int maks = x;
 if ( y > maks )
 maks = y;
 if ( z > maks )
 maks = z;
 return maks;
 }
