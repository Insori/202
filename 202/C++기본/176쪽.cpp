#include <iostream>

using namespace std;

class Person
{
private:
	string name;
	int hakbun;

public:
	Person(string name, int hakbun);
	void PrintShow(void);
	~Person();
};

Person::Person(string name, int hakbun)
	:name(name), hakbun(hakbun) {}

void Person::PrintShow(void) 
{
	cout << "�̸�: " << name << endl;
	cout << "�й�: " << hakbun << endl;
}

Person::~Person()
{
	cout << "Person �Ҹ��� ȣ��" << endl;
}

class Student : public Person
{
private:
	string university;

public:
	Student(string name, int hakbun, string university);
	~Student();
};

Student::Student(string name, int hakbun, string university) : Person(name, hakbun) {}

int main(void)
{
	Student s = Student("ISR", 1111, "SNU");
	s.PrintShow();
}

Student::~Student()
{
	cout << "Student �Ҹ��� ȣ��" << endl;
}