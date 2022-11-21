#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <Windows.h>

//
//int main()
//{
//	char arr1[] = "life is beautiful";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep (1000);//ÐÝÃßÒ»Ãë
//		system ("cls");//Çå¿ÕÆÁÄ»
//		left++;
//		right--;
//		
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("ÊäÈëÕýÈ·\n");
			break;
		}
		else 
		{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
		}
	}
	if (i == 3)
	{
		printf("´íÎóÈý´ÎÍË³ö³ÌÐò\n");
	}
	return 0;
}