#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	int i = 1;
//	while (i <= 10) {
//
//
//		printf("%d ", i);
//		i++;
//	}
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		/*if (i == 5)
//			break;*/
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for(a = 0; a < 3; a++)
//	{
//		for (b = 0; b < 3; b++)
//		{
//			printf("hehe\n");
//		}
//		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (; a < 3; a++)
//	{
//		for (; b < 3; b++)
//		{
//			printf("hehe\n");
//		}
//
//	}
//	return 0;
//}
//���ʡ�Գ�ʼ�� �����3��hehe ��Ϊb��ֵ��0��3��һֱΪ3 ��������һ��ѭ�� ��ʼ����0

int main()
{
	int a = 0;
	int b = 0;
	for (a = 0, b = 0; a == 0; a++, b++)
		a++;

	return 0;
}