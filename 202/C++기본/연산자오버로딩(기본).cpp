#include <iostream>

using namespace std;

class Point
{
public:
	//생성자
	Point(int x, int y);
	Point(void);

	//연산자 오버로딩
	Point operator+(const Point& rhs)
	{
		Point p;
		p.mX = mX + rhs.mX;
		p.mY = mY + rhs.mY;

		return p;
	}
	void print(void);

private:
	int mX;
	int mY;
};

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);

	Point sum = p1 + p2;
	sum.print();
	
	return 0;
}

Point::Point(int x, int y)
	: mX(x), mY(y) {}

Point::Point(void) {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}
