#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, d, x, x1, x2;

	printf("계수 a를 입력하시오 : ");
	scanf("%lf", &a);
	printf("계수 b를 입력하시오 : ");
	scanf("%lf", &b);
	printf("계수 c를 입력하시오 : ");
	scanf("%lf", &c);

	d = pow(b, 2) - 4.0 * a * c;

	if (a == 0) {
		x = -c / b;
		printf("위의 이차 방정식의 실근은 %.2lf입니다. ", x);
	}
	else {
		x1 = (-b + sqrt(d)) / (2.0 * a);
		x2 = (-b - sqrt(d)) / (2.0 * a);
		if (d < 0)
			printf("허근");
		else if (d == 0) {
			x1 = (-b) / (2.0 * a);
			printf("위의 이차 방정식의 실근(중근)은 %.2lf입니다.", x1);
		}
		else if (d > 0)
			printf("위의 이차 방정식의 실근은 %.2lf과 %.2lf입니다.", x1, x2);
	}

	return 0;
}