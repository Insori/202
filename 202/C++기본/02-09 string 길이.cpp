#include <iostream>	//cout, endl 객체를 가지고 있음
#include <string>	//string 클래스를 가지고 있음

#include <stdio.h>	//printf()를 가지고 있음
#include <string.h>	//strlen()를 가지고 있음
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d\n", strlen(cI));

	string cppI = "aaa";
	cout << cppI.size() << endl;
	cout << cppI.length() << endl;
	

	return 0;
}