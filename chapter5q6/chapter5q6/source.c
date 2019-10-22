#include <stdio.h> 

int main(void)
{
	int x, y, average;
	char score;

	printf("중간 고사 점수를 입력하시오 : ");
	scanf("%d", &x);
	printf("기말 고자 점수를 입력하시오 : ");
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

	printf("당신의 학점은 %c학점입니다.", score);

	return 0;
}
