#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("삼각형의 세변을 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
		printf("정삼각형");
	else if (a == b || a == c && b != c)
		printf("이등변삼각형");
	else
		printf("일반삼각형");

	return 0;
}