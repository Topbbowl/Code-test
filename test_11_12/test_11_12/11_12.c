#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	do {
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//	return 0;
//}



//int main()
//{
//	int n ;
//	int ret = 1;
//	int a;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		ret *= a;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int a;
//	int b;
//	int ret = 1;
//	scanf("%d", &b);
//	for (a = 1; a <= b; a++)
//	{
//		ret = ret * a;
//	}
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	int a;
//	int b;
//	int ret = 1;
//	int sum = 0;
//	for (b = 1; b <= 4; b++)
//	{
//		ret = 1;//计算阶乘是要将ret初始为1
//		for (a = 1; a <= b; a++)
//		{
//			ret *= a;
//		}
//		sum += ret;
//	}
//		printf("%d", sum);	
//	
//	return 0;
//}

int main()
{
	int a;
	int b;
	int ret = 1;
	int sum = 0;
	for (a = 1; a <= 3; a++)
	{
		ret = ret * a;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}//另一种阶乘求和方法！