#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(void)

{

int i,j,sayi,toplam=0;

printf("Kontrol edilcek sayiyi giriniz...");
scanf("%d",&sayi);

for(i=1;i<sayi;i++) {

if(sayi%i==0)
toplam+=i;

}

if(toplam==sayi)
printf("Sayi Mukemmeldir");

else 
printf("Sayi Mukemmel Degildir");

getch();return 0;

}

