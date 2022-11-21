#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//
//int main() 
// {
//	int a = 0;	
//	while ( a <= 5 ) {
//		if (a == 5)
//			continue;
//                    
//			/*break;*/
//		printf("%d ", a);
//		a++;
//
//	}
//
//	return 0;
//
//}
//int main() 
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//
//}
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//        break;
//
//    default: b = 0;
//    }
//    return b;
//}
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int x = 3;
	int y = 3;
	switch (x % 2) {  // x%2的结果为1，因此执行case1
	case 1:
		switch (y)   // y是3，因此会执行case3，而case3不存在，那只能执行default
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello"); // 打印hello，打印完之后，内部switch结束，此时外部case1结束
		}             // 因为外部case1之后没有添加break语句，所以继续执行case2
	case 2:             // 打印third
		printf("third");      // 外部switch结束
	}
	return 0;
}
