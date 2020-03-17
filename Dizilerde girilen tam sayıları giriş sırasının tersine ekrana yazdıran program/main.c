#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int sayi[10];
	int i;
	
    printf("10 adet sayi giriniz\n");
    for(i=0;i<10;i++)
       scanf("%d",&sayi[i]);
    printf("Girilen sayilar sondan basa:\n");
    for(i=9;i>=0;i--)
       printf("%d\n",sayi[i]);
    
    
   
	return 0;
}
