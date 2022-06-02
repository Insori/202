#include <iostream>

class CBox {
public:		//private X
	double width;
};

class ChildBox : CBox
{
public:
	void setWidth(double w) {
		width = w;
	}
};