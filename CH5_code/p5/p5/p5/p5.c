#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int *aptr;
	a = 7;
	aptr = &a;
	printf("The address of a is %p\nThe value of aPtr is %p", &a, aptr);
	printf("\n\nThe value of a is %d \nThe value of *aptr is %d", a, *aptr);
	printf("\n\nShowing that * and & are complemets of each other\n&*aptr = %p"
		"\n*&aPtr = %p\n", &*aptr, *&aptr);
	system("pause");
	return 0;
}