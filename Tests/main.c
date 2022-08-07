#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n = 0;
	n = _printf("Hello %s\n", "World");
	printf("n: %d\n", n);

	return (0);
}