#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, x2, y1, y2;

	printf("첫번째 점 (x1, y1) : ");
	scanf("%lf %lf", &x1, &y1);
	printf("두번째 점 (x2, y2) : ");
	scanf("%lf %lf", &x2, &y2);

	printf("Distance = %lf", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));

	return 0;
}