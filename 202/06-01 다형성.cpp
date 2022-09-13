#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal »ý¼º" << endl; }
	virtual ~Animal() { cout << "Animal ¼Ò¸ê" << endl; }

	virtual void eat(void) = 0;
	virtual void roar(void) = 0;
	virtual void walk(void) = 0;

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger »ý¼º" << endl; }
	virtual ~Tiger() { cout << "Tiger ¼Ò¸ê" << endl; }

	void eat(void) override { cout << "È£¶ûÀÌ ¸Ô¾î" << endl; }
	void roar(void) { cout << "¾îÈï" << endl; }
	void walk(void) { cout << "È£¶ûÀÌ °É¾î" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog »ý¼º" << endl; }
	virtual ~Dog() { cout << "Dog ¼Ò¸ê" << endl; }

	void eat(void) override { cout << "°³ ÂÁÂÁ" << endl; }
	void roar(void) override { cout << "¸Û¸Û" << endl; }
	void walk(void) override { cout << "°³ °É¾î" << endl; }
};

void main(void)
{
	Animal* animal = new Tiger();
	animal->eat();
	delete animal;

}