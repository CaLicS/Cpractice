#include <stdio.h>

int main(void)
{
	int x, y, temp = 0;

	printf("�������� : ");
	scanf("%d", &x);
	printf("�������� : ");
	scanf("%d", &y);

	for (x; x <= y; x++) {
		temp = temp + x;
	}
	printf("Sum of %d to %d = %d", x, y, temp);

	return 0;
}