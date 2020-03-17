#include<stdio.h>

char birles(char a[3],char b[4]);

int main()
{
	char string1[3]={'a','l','i'};
	char string2[4]={'v','e','l','i'};
	
	birles(string1,string2);
}


char birles(char a[3],char b[4])
{
	int i;
	char string3[7];
	for(i=0;i<3;i++)
	{
		string3[i]=a[i];
	}
	for(i=0;i<4;i++)
	{
		string3[3+i]=b[i];
	}
	printf("%s",string3) ;
}
