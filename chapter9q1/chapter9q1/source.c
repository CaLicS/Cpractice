#include <stdio.h>

int get_array_sum(int *A, int size);
void print_array(int *A, int size);

int main(void)
{
	int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sum;
	int *a = data;

	sum = get_array_sum(a, 10);
	printf("print_array()\n");

	print_array(a, 10);

	printf("배열 요소의 합 = %d\n", sum);

	return 0;
}

void print_array(int *A, int size)
{
	int count;

	for (count = 0; count <= size - 1; count++) {
		printf("%d ", A[count]);
	}
	printf("\n");
}

int get_array_sum(int *A, int size)
{
	int i, temp= 0;

	for (i = 0; i < 10; i++) {
		temp += A[i];
	}
	return temp;
}

