#include <iostream>
#include <string>

using namespace std;

template <typename T>

T sum(T x, T y) {
	T z = x + y;
	return z;
}

int main(void) {
	cout << sum<int>(2, 3) << endl;
	cout << sum<float>(2.f, 3.f) << endl;
}