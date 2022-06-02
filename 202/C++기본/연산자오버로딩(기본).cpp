#include <iostream>

using namespace std;

class Point
{
public:
	Point(int x, int y);
	void print(void);

private:
	int mX;
	int mY;
};

int main(void)
{
	Point p1(1, 2);
	p1.print();

	return 0;
}

Point::Point(int x, int y)
	: mX(x), mY(y) {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}
