#include <stdio.h>
#define SQM 3.3058

int main(void)
{
	double x;

	printf("면적을 제곱미터 단위로 입력하시오 : ");
	scanf("%lf", &x);
	printf("%lf제곱미터는 %lf평입니다.", x, x / SQM);

	return 0;
}