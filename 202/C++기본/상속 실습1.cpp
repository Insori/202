#include <iostream>
#include <string.h>
using namespace std;

class Person
{
private:
	string sName;
protected:
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();
};

Person::Person()
{
	sName = "�͸�";
	nAge = 0;
}

Person::Person(std::string name, int age)
//	:sName(name), nAge(age)
{
	sName = name;
	nAge = age;
}

void Person::hi()
{
	cout << "�̸�: " << sName << endl;
	cout << "����: " << nAge << endl;
}

class Student : private Person
{
private:
	int nHakbun;
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
};

Student::Student() : Person()
{
	nHakbun = 0;
}

Student::Student(string name, int age, int hakbun)
: Person(name, age), nHakbun(hakbun) {}

void Student::study()
{
	hi();
	//sName = "ȫ�浿";		//���� �Ұ�
	nAge = 20;
	cout << nAge << endl;
}

int main()
{
	Person* person = new Person("�μҸ�", 17);
	person->hi();

	Student student;
	student.study();
	//student.hi();		//���� �Ұ�
}