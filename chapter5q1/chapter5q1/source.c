#include <stdio.h>

int main(void)
{
	int x;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	if (x % 2 == 0)
		printf("%d�� ¦���Դϴ�.", x);
	else
		printf("%d�� Ȧ���Դϴ�.", x);
	
	return 0;
}