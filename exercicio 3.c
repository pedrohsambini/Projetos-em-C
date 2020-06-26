#include <stdio.h>

int main()
{
	
	int a;
	int c;
	int d;
	int b=0;
	
	a = b++;
	c = b++;
	d = b++;
	
	a = ++b;
	c = ++b;
	d = ++b;
	
	printf("\n agora: a = %d",a);
	printf("\n agora: c = %d",c);
	printf("\n agora: d = %d",d);
}
