#include <iostream>
#include <string>

using namespace std;

int main(void) {
	double arr[4] = { 1.1,2.2,3.3,4.4 };

	for (double x : arr)
		cout << x << " ";

	return 0;
}