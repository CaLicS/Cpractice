#include <stdio.h> 

int main(void)
{
	int x, y, average;
	char score;

	printf("�߰� ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("�⸻ ���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &y);
	
	average = (x + y) / 2;
	if (average >= 90)
		score = 'A';
	else if (average >= 80 && average < 90)
		score = 'B';
	else if (average >= 70 && average < 80)
		score = 'C';
	else if (average >= 60 && average < 70)
		score = 'D';
	else
		score = 'F';

	printf("����� ������ %c�����Դϴ�.", score);

	return 0;
}
