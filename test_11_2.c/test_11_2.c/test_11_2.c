#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define ADD(x,y) ((x)+(y))
//���д��ADD(x,y) (x+y) ��ô��������ǻ��ȳ�x�ټ�y
//int main()
//{
//	printf("%d\n", ADD(2, 3));
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%p\n", &a);
//	return 0;
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//struct Stu
//{
//	char name[20];//����һ��ѧ��
//	int age;
//	double score;
//};
struct Book
{
	char name[20];//����һ����
	float price;
	char id[30];
};
int main()
{
	struct Book s = { "����", 20, "396799" };
	printf("%s %f %s\n", s.name, s.price, s.id);
	return 0;
}