#include <stdio.h>
#include <stdlib.h>
int recursiveMaximum(int *a, int x);
int main()
{
	int b[5];
	printf("�̧ǿ�J�ƭ�\n");
	for (int i = 0; i < 5; i++) {
		printf("a[%d]=", i);
		scanf_s("%d", &b[i]);
	}
	printf("�̤j��:%d", recursiveMaximum(&b,5));
	system("pause");
	return 0;
}
int recursiveMaximum(int *a, int x)
{
	int max = 0;
	for (int i = 0; i < x; i++) {
		if (a[i] > max)max = a[i];
	}
	return max;
}
