#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stringReverse(char str[]);
int main()
{
	char a[50];
	printf("input string:");
	gets(a);
	stringReverse(a);
	system("pause");
	return 0;
}
void stringReverse(char str[])
{
	int i, cnt = 0;
	printf("inverse\n");
	while (str[cnt] != 0) {
		cnt++;
	}
	for (i=cnt; i >= 0 ; i--) {
		printf("%c", str[i]);
	}
}