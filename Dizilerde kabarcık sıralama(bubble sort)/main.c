#include<stdio.h>
int main()
{
	int n[5]={2,1,0,3,4};
	int i,j,yedek;

	
	printf("Dizinin ilk hali:\n");
	for(i=0;i<5;i++)
	  printf("%d\t",n[i]);
	  

	for(i=1;i<5;i++)
	 for(j=0;j<5-1;j++)
	   if(n[j]>n[j+1])
	     {
	     	yedek=n[j];
	     	n[j]=n[j+1];
	     	n[j+1]=yedek;
	     }
	printf("\nDizinin sirali hali:\n");
	for(i=0;i<5;i++)
	  printf("%d\t",n[i]);
	
	return 0;
}
