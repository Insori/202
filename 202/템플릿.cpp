#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
class Character {
public: 
	Character(T1 sd, T2 id1, T2 id2, T2 id3) {
		sdata = sd;
		idata1 = id1;
		idata2 = id2;
		idata3 = id3;
	}
	void print() {
		cout << "이름: " << sdata << endl;
		cout << "체력: " << idata1 << endl;
		cout << "공격: " << idata2 << endl;
		cout << "방어: " << idata3 << endl;
	}

private:
	T1 sdata;
	T2 idata1;
	T2 idata2;
	T2 idata3;
};

int main(void) {
	Character<string, int>* c = new Character<string, int>("Andy", 100, 30, 20);
	c->print();

	delete c;

	return 0;
}