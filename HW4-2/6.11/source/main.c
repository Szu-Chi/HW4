#include<stdio.h>
#include<stdlib.h>
#define num 10

void swap( int *a, int *b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void bubbleSort( int *a ) {
	int chang = 0, step = 0, k;
	for (int i = num - 1; i > 0; i--) {
		for (int j = 0; j < i; j++)
			if (a[j] > a[j + 1]) {
				swap(&a[j], &a[j + 1]);
				chang++;
			}

		if (!chang) return;
		else chang = 0;
		printf("setp %d  array = { ", ++step);
		for ( k = 0; k < num - 1; k++)
			printf("%d, ", a[k]);
		printf("%d }\n\n", a[k]);
	}
}

int main(void) {
	srand(time(NULL));
	int array[num];
	int i;
	for (i = 0; i < num; i++)
		array[ i ] = rand() % 100;

	printf("initialize_array = { ");
	for (i = 0; i < num - 1; i++)
		printf("%d, ", array[i]);
	printf("%d }\n\n",array[i]);
	
	bubbleSort(array);

	printf("array = { ");
	for (i = 0; i < num - 1; i++)
		printf("%d, ", array[i]);
	printf("%d }\n\n", array[i]);

	system("pause");
	return 0;
}