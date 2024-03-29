#include <iostream>
#include <string>

using namespace std;

enum Food {
	KOREAN,	//한식(0)
	JAPANESE,	//일식(1)
	CHINESE,	//중식(2)
	COUNT	//총 갯수(3)
};

int main(void) {
	string food_spot[Food::COUNT];

	food_spot[Food::KOREAN] = "삼백집";
	food_spot[Food::JAPANESE] = "야키토리묵";
	food_spot[Food::CHINESE] = "태화장";

	cout << "메뉴 선택" << endl;

	int menu = 1;

	switch (menu)
	{
	case Food::KOREAN:
		cout << "한식: ";
		break;
	case Food::JAPANESE:
		cout << "일식: ";
		break;
	case Food::CHINESE:
		cout << "중식: ";
		break;
	default:
		break;
	}

	cout << food_spot[menu] << endl;

	return 0;
}