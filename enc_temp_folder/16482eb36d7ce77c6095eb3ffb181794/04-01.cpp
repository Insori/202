#include <iostream>
#include "04-01.h"

using namespace std;


Point::Point(int x, int y)
	: mX(x), mY(y) {}

Point::Point(void) {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}
