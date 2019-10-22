#include <stdio.h>

int main(void)
{
	double x, y;

	printf("과세 표준을 입력하시오(만원) : ");
	scanf("%lf", &x);

	if (x > 8000)
		y = (x - 8000) * 0.35 + 4000 * 0.26 + 3000 * 0.17 + 1000 * 0.08;
	else if (x > 4000 && x <= 8000)
		y = (x - 4000) * 0.26 + 3000 * 0.17 + 1000 * 0.08;
	else if (x > 1000 && x <= 4000)
		y = (x - 1000) * 0.17 + 1000 * 0.08;
	else if (x <= 1000)
		y = x * 0.08;

	printf("소득세는 %d만원입니다.", (int)y);

	return 0;
}