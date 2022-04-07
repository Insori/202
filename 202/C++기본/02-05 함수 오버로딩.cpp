#include <iostream>
using namespace std;

//pre컴파일러가 처리
//자료형에 영향 받지 않음
//#define jegob(A)	((A)*(A))

//함수 이름은 같고, 매개변수는 다름(함수 오버로딩)
int jegob(int A, int B)
{
	return A * A + B;
}

double jegob(double A, double B)
{
	return A * A + B;
}

int main(void)
{
	cout << jegob(4, 1) << endl;	//17
	cout << jegob(3.3, 1.1) << endl;	//11.99

	return 0;
}