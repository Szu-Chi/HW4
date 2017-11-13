#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void) {
	int s[SIZE];
	int i;
	
	for (i = 0; i < SIZE; i++)
		s[i] = 2 + 2 * i;
	printf("%s%13s\n","Element","Value");

	for (i = 0; i < SIZE; i++)
		printf("%7d%13d\n",i,s[i]);

	system("pause");
	return 0;
}