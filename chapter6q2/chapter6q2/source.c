#include <stdio.h>

int main(void)
{
	int x, i;

	printf("몇 번이나 반복할까요? : ");
	scanf("%d", &x);
	
	for (i = 0; i < x; i++) {
		printf("안녕하세요 ? \n");
	}

	return 0;
}