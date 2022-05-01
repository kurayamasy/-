#include<stdio.h>
//void reverse_string(char* arr)
//{
//	int sz = 0;
//	while (*arr != '\0')
//	{
//		sz++;
//		arr++;
//
//	}
//	char t = '0';
//	if()
//	t = arr[0];
//	arr[0] = arr[sz-1];
//	arr[sz-1] = t;
//	reverse_string(arr - 2);
//	
//}
//int main()
//{
//
//
//	char arr1[] = { "hello,world" };
//	reverse_string(arr1);
//	printf("%c", arr1);
//		return 0;
//}
//int digitsum(int n)
//{
//	if (n > 9)
//		return (n % 10) + digitsum(n / 10);
//	else
//		return n;
//
//
//}
//int main()
//{
//	printf("%d", digitsum(1234));
//
//	return 0;
//}

//int fun(int n,int k)
//{
//	if (k > 0)
//		return n * fun(n, k - 1);
//	else
//		return n;
//}
//int main()
//{
//	printf("%d",fun(10, 5));
//
//
//	return 0;
//}
// 
// 
// 
// 
// 
//int fun(int n)
//{
//	if (n > 2)   //µİ¹éÇóì³²¨ÄÇÆõ	
//		return fun(n - 1) + fun(n - 2);
//	else
//		return 1;
//}
//int fun1(int n)//·Çµİ¹éÇóì³²¨ÄÇÆõ
//{
//	
//	int x1 = 1;
//	int x2 = 1;
//	int x3 = 0;
//	int i = 3;
//	for (i; i <= n; i++)
//	{
//		x3 = x1 + x2;
//		x1 = x2;
//		x2 = x3;
//
//	}
//	return x3;
//
//}
//
//int main()
//{
//	printf("%d\n", fun1(10));
//	printf("%d", fun(10));
//
//	return 0;
//}
