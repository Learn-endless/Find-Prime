#define _CRT_SECURE_NO_WARNINGS 1
//�����������һ�����ж��Ƿ�Ϊ������������
#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		int k = sqrt(float(n));
		for (i = 2; i <= k; i++)
		if (n%i == 0)break;
		if (i <= k)
			printf("%d ��������\n", n);
		else
			printf("%d ������\n", n);
	}
	return 0;
}


//����1���Գ�����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d������\n", i);
//		else
//			printf("%d��������\n", i);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//����2���Գ�����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("2������\n");
//	for (i = 3; i <= 100; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d������\n", i);
//		else
//			printf("%d��������\n", i);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//����3���Գ�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(float(i)); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j<=sqrt(float(i)))
//			printf("%d��������\n", i);
//		else
//			printf("%d������\n", i);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//����4���Գ�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int num = 0;
//	printf("2������\n");
//	for (i = 3; i <= 100; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(float(i)); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j <= sqrt(float(i)))
//			printf("%d��������\n", i);
//		else
//			printf("%d������\n", i);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
