#include <stdio.h>
#include <stdlib.h>
kareHesapla(int x);

int main()
 {
 	int i;
 	for(i=1;i<=10;i++)
 	{
 		kareHesapla(i);
 		
 	}
 	
}

 kareHesapla(int x)
{
	int karesi;
	karesi=x*x;
	
}
printf("%d'nin karesi %ddir.\n",x,karesi);
