#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop 

int main()
{
  int sayi=0,katsayi=10;
  printf("Lutfen 9 veya daha az haneli sayinizi giriniz");
  scanf("%d",&sayi);
   
  while(1)
  {
  	if(kaysayi>sayi)
	  {
	  	break;
	  }
	  katsayi=katsayi*10;
  } 
  
  
  
  return 0;
}
*/
int main ()
{
    int sayi=0;
    printf("Sayiyi GÝriniz\n");
    scanf("%d",&sayi);
    int basamak=0;
    while(sayi)
    {
        sayi=sayi/10;
        basamak++;
    }
    printf("Girilen Sayi %d Basamaklidir.",basamak);
    return 0;
}

