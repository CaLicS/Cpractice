#include <stdio.h>

int main(void)
{
	char x;

	printf("신호등의 색깔 입력 (R, G, Y) : ");
	scanf("%c", &x);
	if (x == 'r' || x == 'R')
		printf("정지!");
	else if (x == 'g' || x == 'G')
		printf("진행");
	else if (x == 'y' || x == 'Y')
		printf("주의");
	else
		printf("해당안됨");

	return 0;
}