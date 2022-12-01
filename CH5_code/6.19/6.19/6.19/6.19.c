#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((int)time(NULL));
	int a[12] = { 0 }, b, c,d;
	for (int i = 0; i < 36000; i++) {
		b = rand() % 6 + 1;
		c = rand() % 6 + 1;
		d = b + c;
		switch (d)
		{
		case 2:
			a[0]++;
			break;
		case 3:
			a[1]++;
			break;
		case 4:
			a[2]++;
			break;
		case 5:
			a[3]++;
			break;
		case 6:
			a[4]++;
			break;
		case 7:
			a[5]++;
			break;
		case 8:
			a[6]++;
			break;
		case 9:
			a[7]++;
			break;
		case 10:
			a[8]++;
			break;
		case 11:
			a[9]++;
			break;
		case 12:
			a[10]++;
			break;
		}
	}
	for (int i = 0; i < 11; i++)printf("點數%d出現%d次\n", i + 2, a[i]);
	system("pause");
	return 0;
}