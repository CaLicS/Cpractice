#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, x2, y1, y2;

	printf("ù��° �� (x1, y1) : ");
	scanf("%lf %lf", &x1, &y1);
	printf("�ι�° �� (x2, y2) : ");
	scanf("%lf %lf", &x2, &y2);

	printf("Distance = %lf", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));

	return 0;
}