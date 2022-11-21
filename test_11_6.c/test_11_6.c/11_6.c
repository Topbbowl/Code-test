#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 1;
//	while (a <= 10) {
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}


//如果要在while中打断 条件后加break
int main()
{
	int a = 1;
	while (a <= 10) {
		printf("%d ", a);
		if (a == 5)
			break;
		a++;
	}
	return 0;
}

