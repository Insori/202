#include <iostream>

using namespace std;

class Point
{
public:
	//생성자
	Point(int x, int y);
	Point(void);

	//연산자 오버로딩
	Point operator+(const Point& rhs);

	void print(void);

private:
	int mX;
	int mY;
};
