#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &y);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &z);

	printf("����� %d�Դϴ�.", (x + y + z) / 3);

	return 0;
}