#include <stdio.h>

int main(void)
{
	double x;

	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	printf("���׽��� ���� %lf�Դϴ�.", 3*(x*x*x) - 7*(x*x) + 9);
	
	return 0;
}