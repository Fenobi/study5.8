#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int a = m ^ n;
//	int count = 0;
//	while (a)
//	{
//		if (a % 2)
//		{
//			count++;
//		}
//		a >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}


//��ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		if (a % 2)
//			count++;
//		a >>= 1;
//	}
//	printf("%d��1", count);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}