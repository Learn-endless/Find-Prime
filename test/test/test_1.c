#define _CRT_SECURE_NO_WARNINGS 1
//经典程序：输入一个数判断是否为素数（质数）
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
			printf("%d 不是素数\n", n);
		else
			printf("%d 是素数\n", n);
	}
	return 0;
}


//境界1（试除法）
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
//			printf("%d是素数\n", i);
//		else
//			printf("%d不是素数\n", i);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//境界2（试除法）
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("2是素数\n");
//	for (i = 3; i <= 100; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d是素数\n", i);
//		else
//			printf("%d不是素数\n", i);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//境界3（试除法）
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
//			printf("%d不是素数\n", i);
//		else
//			printf("%d是素数\n", i);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//境界4（试除法）
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int num = 0;
//	printf("2是素数\n");
//	for (i = 3; i <= 100; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(float(i)); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j <= sqrt(float(i)))
//			printf("%d不是素数\n", i);
//		else
//			printf("%d是素数\n", i);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
