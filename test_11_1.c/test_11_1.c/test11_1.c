#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int max(int x, int y)
//
//{
//
//	int z;
//
//	if (x > y) {
//
//		z = x;
//
//	}
//
//	else {
//
//		z = y;
//
//	}
//
//	return z;
//
//}
//
//int main()
//
//{
//
//	int x = 0;
//
//	int y = 0;
//
//	scanf("%d %d", &x, &y);
//
//	int z = max(x, y);
//
//	printf("%d ", z);
//
//	return 0;
//
//}
//void test()
//{
//	int a = 1; 区别为int a前有无static！！！         
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//
//}
static int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 30;
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}