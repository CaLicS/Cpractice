#include <stdio.h>

int main(void)
{
	int x, y, max, min;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &y);
	
	if (x > y)
		max = x, min = y;
	else if (x < y)
		max = y, min = x;

	printf("�μ��� ���� %d�Դϴ�.", max + min);
	printf("�μ��� ���� %d�Դϴ�.", max - min);

	return 0;
}