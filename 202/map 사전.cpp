#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	map<string, string> m;
	m["happiness"] = "�ູ";
	m["difficulty"] = "�����";
	m["sadness"] = "����";

	map<string, string>::iterator iter;

	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << ": " << iter->second << endl;
	}
	cout << endl;

	//������ ����
	m.erase("difficulty");

	cout << "������ ���� ��" << endl;
	cout << endl;

	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << ": " << iter->second << endl;
	}

	return 0;
}