#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int input, tot = 0;
	double avg;

	cout << "������ �Է�: ";
	for (int i = 0; i < 5; i++) {
		cin >> input;
		v.push_back(input);
	}

	vector<int>::iterator iter;

	cout << "�Է¹��� ������: ";
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
		tot += *iter;
	}
	cout << endl;

	cout << "�հ�: " << tot << endl;
	cout << "���: " << (tot / 5) << endl;
}