#include <stdio.h>

int main(void)
{
	int i;

	printf("===========================\nȭ���µ�           �����µ�\n===========================\n");
	
	for (i = 0; i <= 100; i += 10) {
		printf("%d        %d\n", i, (int)((i - 32) / 1.8));
	}

	return 0;
}