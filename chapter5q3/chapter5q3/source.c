#include <stdio.h>

int main(void)
{
	int x, y, max, min;

	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("정수를 입력하시오 : ");
	scanf("%d", &y);
	
	if (x > y)
		max = x, min = y;
	else if (x < y)
		max = y, min = x;

	printf("두수의 합은 %d입니다.", max + min);
	printf("두수의 차는 %d입니다.", max - min);

	return 0;
}