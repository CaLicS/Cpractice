#include <stdio.h>

int main(void)
{
	int i;

	printf("===========================\nÈ­¾¾¿Âµµ           ¼·¾¾¿Âµµ\n===========================\n");
	
	for (i = 0; i <= 100; i += 10) {
		printf("%d        %d\n", i, (int)((i - 32) / 1.8));
	}

	return 0;
}