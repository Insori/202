#include <iostream>
#include <string>

using namespace std;

class Character {
public: 
	Character(string name, int hp, int attack, int defense) {
		this->name = name;
		this->hp = hp;
		this->attack = attack;
		this->defense = defense;
	}
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "ü��: " << hp << endl;
		cout << "����: " << attack << endl;
		cout << "���: " << defense << endl;
	}

private:
	string name;
	int hp;
	int attack;
	int defense;
};

int main(void) {
	Character* c = new Character("Andy", 100, 30, 20);
	c->print();

	delete c;

	return 0;
}