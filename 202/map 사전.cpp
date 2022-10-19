#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	map<string, string> m;
	m["happiness"] = "행복";
	m["difficulty"] = "어려움";
	m["sadness"] = "슬픔";

	map<string, string>::iterator iter;

	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << ": " << iter->second << endl;
	}
	cout << endl;

	//데이터 삭제
	m.erase("difficulty");

	cout << "데이터 삭제 후" << endl;
	cout << endl;

	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << ": " << iter->second << endl;
	}

	return 0;
}