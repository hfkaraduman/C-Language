#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int a,b,c;
	for(a=1;a<=500;a++)
	   for(b=1;b<=500;b++)
	      for(c=1;c<=500;c++)
	      {
	      	if(a*a+b*b==c*c)
	      	printf("%d\t%d\t%d\t\n",a,b,c);
	      }
	          
	 
	 	
	 
	return 0;
}
