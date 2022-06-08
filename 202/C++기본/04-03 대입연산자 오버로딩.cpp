#include <iostream>	//cout, endl ��ü�� ������ ����
#include <string.h>	

using namespace std;

class Student
{
private:	
	int nHakbun;
	char* sName;
	
public:

	//������: ��ü�� ������ �� ȣ��Ǵ� �Լ�
	Student(void);
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);

	//�Ҹ���: ��ü�� �޸𸮿��� ������ ��, ȣ��Ǵ� �Լ�
	~Student();

	//������ �����ε�
	Student& operator=(const Student& rhs);

	void show(void);
};

int main(void)
{
	//�Ϲ� ������ ȣ��
	Student stu1 = Student(1111, "JWP");
	Student stu3 = Student(2222, "JYP");
	stu1.show();

	//���� ������ ȣ��
	Student stu2 = stu1;
	stu2.show();	//(1111, "JWP")

	//���Կ����� ȣ��
	stu1 = stu3;	//stu1.operator=(stu3);
	stu1.show();	//(2222, "JYP")

	return 0;
}

Student::Student(int Hakbun, const char* Name)
// ��ü ������ ���ÿ� ������� �ʱ�ȭ	//���� - �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	:nHakbun(Hakbun)
{
	cout << "�Ϲݻ����� ȣ��" << endl;
	int len = strlen(Name) + 1;	//�����Ҵ縸ŭ ������ ũ�⸦ ���ϰ�
	sName = new char[len];	//�� ũ�⸸ŭ �迭�� �����Ҵ�
	strcpy(sName, Name);	//�Ű������� �ִ� ���ڿ� ����
}

void Student::show(void)
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "���������" << endl;
	int len = strlen(rhs.sName) + 1;	
	sName = new char[len];
	strcpy(sName, rhs.sName);
}

Student& Student::operator=(const Student& rhs)
{

	cout << "���Կ����� ȣ��" << endl;
	//������ �����ϴ� ������ �����ϰ� �� ���� �Ҵ� �غ�
	delete[]sName;
	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;		//���� ���� ����
	sName = new char[len];		//���� ����
	strcpy(sName, rhs.sName);

	return *this;
}

Student::~Student()
{
	delete []sName;
	cout << "�Ҹ��� ȣ��" << endl;
}



