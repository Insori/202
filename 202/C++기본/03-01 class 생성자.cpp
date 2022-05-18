#include <iostream>	//cout, endl 객체를 가지고 있음
#include <string.h>	

using namespace std;

class Student
{
private:	
	int nHakbun;
	char* sName;
	
public:

	//생성자: 객체가 생성될 때 호출되는 함수
	Student(void);
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);

	//소멸자: 객체가 메모리에서 해제될 떄, 호출되는 함수
	~Student();
	void show(void);
};

int main(void)
{
	//일반 생성자 호출
	Student stu1 = Student(1111, "JWP");
	//복사 생성자 호출
	Student stu2 = stu1;

	stu1.show();
	stu2.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
// 객체 생성과 동시에 멤버변수 초기화	//형식 - 멤버변수(매개변수)
// const/참조형 멤버변수를 사용할 수 있다.
	:nHakbun(Hakbun)
{
	cout << "일반생성자 호출" << endl;
	int len = strlen(Name) + 1;	//동적할당만큼 공간의 크기를 구하고
	sName = new char[len];	//그 크기만큼 배열로 동적할당
	strcpy(sName, Name);	//매개변수에 있는 문자열 복사
}

void Student::show(void)
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "복사생성자" << endl;
}

Student::~Student()
{
	delete []sName;
	cout << "소멸자 호출" << endl;
}



