#include <stdio.h>

int main(void)
{
	int x = 5, *px;
	px = &x;
	++*px;
	printf("%i\n", *px);
	return 0;
}