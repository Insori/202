#include <stdio.h>

int main()
{
	int a, b, c = 0;
	a = ++c;	//c�� ���� 1 ���� �� a�� c�� ���� c:1, a:1
	b = c++;	//b�� c�� ������ �� c�� 1 �����ϹǷ� b:1, c:2

	printf("%d %d %d\n", a, b, ++c);	//c�� 1 ������ �� print�ϹǷ� a:1, b:1, c:3

	return 0;
}
