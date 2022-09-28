#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

	//크기 확장이 가능한 동적배열
	vector<string> s3;
	s3.reserve(10);	//크기를 10개로 확장

	for (int i = 0; i < 10; i++) {
		s3.push_back("ab");
	}

	//기존 공간에서 크기를 확장하여 삽입
	s3.push_back("ab");


	for (int i = 0; i < s3.size(); i++) {
		cout << s3[i] << " ";
	}
	cout << endl;

	s3[0] = "cd";
	s3.at(2) = "ef";

	for (int i = 0; i < s3.size(); i++) {
		cout << s3[i] << " ";
	}
	cout << endl;

	return 0;
}