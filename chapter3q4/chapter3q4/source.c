#include <stdio.h>
#define SQM 3.3058

int main(void)
{
	double x;

	printf("������ �������� ������ �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	printf("%lf�������ʹ� %lf���Դϴ�.", x, x / SQM);

	return 0;
}