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
	sName = "익명";
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
	cout << "이름: " << sName << endl;
	cout << "나이: " << nAge << endl;
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
	//sName = "홍길동";		//접근 불가
	nAge = 20;
	cout << nAge << endl;
}

int main()
{
	Person* person = new Person("인소리", 17);
	person->hi();

	Student student;
	student.study();
	//student.hi();		//접근 불가
}