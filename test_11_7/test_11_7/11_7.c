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
	switch (x % 2) {  // x%2�Ľ��Ϊ1�����ִ��case1
	case 1:
		switch (y)   // y��3����˻�ִ��case3����case3�����ڣ���ֻ��ִ��default
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello"); // ��ӡhello����ӡ��֮���ڲ�switch��������ʱ�ⲿcase1����
		}             // ��Ϊ�ⲿcase1֮��û�����break��䣬���Լ���ִ��case2
	case 2:             // ��ӡthird
		printf("third");      // �ⲿswitch����
	}
	return 0;
}
