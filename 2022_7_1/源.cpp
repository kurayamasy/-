#include<stdio.h>
//int main()
//{
//	int t = 1;
//	int n = 0;
//	scanf_s("%d", &n);
//	while (n/t)
//	{
//		int i = n / t;
//		int j = n % t;
//
//		if ((n / t) % 2 == 1)
//		{
//
//			n = ((i / 10) * 10 + 1) * t + j ;
//		}
//		else
//		{
//
//			n = ((i / 10) * 10) * t + j ;
//
//		}
//		t *= 10;
//	}
//
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	for (i; i < n; i++)
//	{
//		int j = 0;
//		for (j; j < n - i; j++)
//		{
//			printf("  ");
//		}
//		int k = 0;
//		for (k; k <= i; k++)
//		{
//
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 1;
//	for (i; i <= n; i++)
//	{
//		int j = 1;
//		for (j; j <= n; j++)
//		{
//			if (i == j || n == j + i-1)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int a, b, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b || a == c || b == c)
//			{
//				if (a == b == c)
//					printf("Equilateral triangle!");
//				else
//					printf("Isosceles triangle!");
//			}
//
//
//		}
//		else
//			printf("Not a triangle!");
//
//	}
//
//	return 0;
//}