#include <stdio.h>

int main(void)
{
	double x;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	printf("������ ���� %lf�Դϴ�.", ((x * x * x) - 20) /  (x - 7));

	return 0;
}