#include <stdio.h>

int main()
{
	int a, b, c = 0;
	a = ++c;	//c가 먼저 1 증가 후 a에 c를 대입 c:1, a:1
	b = c++;	//b에 c를 대입한 후 c가 1 증가하므로 b:1, c:2

	printf("%d %d %d\n", a, b, ++c);	//c가 1 증가한 후 print하므로 a:1, b:1, c:3

	return 0;
}
