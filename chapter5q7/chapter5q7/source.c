#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, d, x, x1, x2;

	printf("��� a�� �Է��Ͻÿ� : ");
	scanf("%lf", &a);
	printf("��� b�� �Է��Ͻÿ� : ");
	scanf("%lf", &b);
	printf("��� c�� �Է��Ͻÿ� : ");
	scanf("%lf", &c);

	d = pow(b, 2) - 4.0 * a * c;

	if (a == 0) {
		x = -c / b;
		printf("���� ���� �������� �Ǳ��� %.2lf�Դϴ�. ", x);
	}
	else {
		x1 = (-b + sqrt(d)) / (2.0 * a);
		x2 = (-b - sqrt(d)) / (2.0 * a);
		if (d < 0)
			printf("���");
		else if (d == 0) {
			x1 = (-b) / (2.0 * a);
			printf("���� ���� �������� �Ǳ�(�߱�)�� %.2lf�Դϴ�.", x1);
		}
		else if (d > 0)
			printf("���� ���� �������� �Ǳ��� %.2lf�� %.2lf�Դϴ�.", x1, x2);
	}

	return 0;
}