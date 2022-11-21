#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("weichengnian\n");
//	else if (age >= 18 && age < 26)
//		printf("qingnian\n");
//	else if (age >= 26 && age < 40)
//		printf("zhuangnian\n");
//	else
//		printf("laonian\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
int main()
{
int day = 0;
	scanf("%d", &day);
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
							printf("gongzuori\n");
							break;
	case 6:
	case 7:
									printf("xiuxiri\n");
									break;
	default:
									printf("error\n");
									break;
	}
}
