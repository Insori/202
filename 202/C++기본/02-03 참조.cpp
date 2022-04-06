#include <iostream>

using namespace std;

int main(void)
{
	int a;
	////참조로 a 값을 바꿈
	//int& ra = a;
	//ra = 30;

	//cout << a << endl;	//30

	int* pa = &a;
	*pa = 30;
	cout << a << endl;

	return 0;
}