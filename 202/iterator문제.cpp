#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int input, tot = 0;
	double avg;

	cout << "데이터 입력: ";
	for (int i = 0; i < 5; i++) {
		cin >> input;
		v.push_back(input);
	}

	vector<int>::iterator iter;

	cout << "입력받은 데이터: ";
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
		tot += *iter;
	}
	cout << endl;

	cout << "합계: " << tot << endl;
	cout << "평균: " << (tot / 5) << endl;
}