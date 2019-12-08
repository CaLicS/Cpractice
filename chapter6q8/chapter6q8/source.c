#include <stdio.h>

int main(void)
{
	int x, y, temp = 0;

	printf("시작정수 : ");
	scanf("%d", &x);
	printf("종료정수 : ");
	scanf("%d", &y);

	for (x; x <= y; x++) {
		temp = temp + x;
	}
	printf("Sum of %d to %d = %d", x, y, temp);

	return 0;
}