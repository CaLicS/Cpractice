#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("�ﰢ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
		printf("���ﰢ��");
	else if (a == b || a == c && b != c)
		printf("�̵�ﰢ��");
	else
		printf("�Ϲݻﰢ��");

	return 0;
}