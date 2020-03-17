#include <stdio.h>

 int karsilastir( const char *, const char * );

 int main()
 {
 char string1[ 80 ], string2[ 80 ];

 printf( "İki string giriniz: " );
 scanf( "%s%s", string1 , string2 );
 
 int durum=karsilastir(string1,string2);
 if(durum==1)
 {
 	printf("ayni");
 }
 else
 {
 	printf("farkli");
 }
 return 0;
 }

 int karsilastir( const char *s1, const char *s2 )
 {
 	
 	for ( ; *s1 != '\0' && *s2 != '\0'; s1++, s2++ )

	{
		if ( *s1 != *s2 )
		return 0;
	}
	return 1;
	
}
 


