#include <stdio.h>

int main(void)
{
	int x = 1;
	//2�� break�� �־ "12"�� ��µ�
	switch (x) {
	case 0:
		printf("0");
		break;
	case 1:
		printf("1");
	case 2:
		printf("2");
		break;
	default:
		printf("d");
	}
}