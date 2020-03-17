#include <stdio.h>
long fibonacci( long );
int main( )
{
long sonuc, sayi;
printf( "Bir tamsayý giriniz: " );
scanf( "%ld", & sayi);
sonuc = fibonacci(sayi);
printf( "Fibonacci( %ld ) = %ld\n", sayi, sonuc);
return 0;
}
 /* Yinelemeli tanýmlanmýþ fibonacci fonksiyonu */
long fibonacci( long n )
{
if ( n == 0 || n == 1 )
return n;
else
return fibonacci( n - 1 ) + fibonacci( n - 2 );
}
