#include<stdio.h>

void hello(void);

int main(void)
{
	int i = 0;

	for (i = 0; i < 2; i++)
	{
		hello();
	}
}
void hello(void)
{
	printf("Hello World\n");
	return; // no expression as function is not returning any value.
}