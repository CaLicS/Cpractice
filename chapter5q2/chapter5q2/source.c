#include <stdio.h>

int main(void)
{
	char x;

	printf("��ȣ���� ���� �Է� (R, G, Y) : ");
	scanf("%c", &x);
	if (x == 'r' || x == 'R')
		printf("����!");
	else if (x == 'g' || x == 'G')
		printf("����");
	else if (x == 'y' || x == 'Y')
		printf("����");
	else
		printf("�ش�ȵ�");

	return 0;
}