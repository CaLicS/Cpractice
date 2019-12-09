#include <stdio.h>

int main(void)
{
	int x = 3000;
	int *p;
	p = &x;

	printf("%u\n", p);
	printf("%d\n", p);
	printf("%u\n", *p);
	printf("%d\n", *p);
	printf("%u\n", x);
	printf("%d\n", x);
	printf("%u\n", &x);
	printf("%d\n", &x);
	printf("%u\n", *&x);
	printf("%d\n", *&x);
	printf("%u\n", &p);
	printf("%d\n", &p);
	printf("%u\n", *&p);
	printf("%d\n", *&p);

	return 0;
}