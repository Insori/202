#include <iostream>
#include <string>

using namespace std;

class m_string 
{
private:
	char* _Myptr;	//���� ���ڿ��� �����ּҸ� ��� �ִ� ������
	int _Mysize;	//���ڿ��� ���ڼ�

	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}

public:
	m_string();	//������
	m_string(const char* str);	//������
	m_string(const m_string& rhs);	//���� ������
	~m_string();	//�Ҹ���
	m_string& operator=(const m_string& rhs);	//���� ������
	m_string operator+(const m_string& rhs);	//���� ������
	int operator==(const m_string& rhs);	//�� ������

	int size(void);	//���ڿ��� ���ڼ��� ��ȯ
	const char* c_str(void);	//���ڿ��� �����ּҸ� ��ȯ

};

m_string::m_string() 
{
	_Myptr = NULL;
	_Mysize = 0;
}	

m_string::m_string(const char* str)	
{
	//cout << "�Ϲ� ������ ȣ��" << endl;
	_Mysize = strlen(str) + 1;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, str);
}

m_string::m_string(const m_string& rhs)
	: _Myptr(rhs._Myptr)
{
	//cout << "���� ������ ȣ��" << endl;
	_Mysize = strlen(rhs._Myptr) + 1;	//rhs._Mysize;
	_Myptr = new char[_Mysize];	
	strcpy(_Myptr, rhs._Myptr);
}

m_string::~m_string()
{
	//cout << "�Ҹ��� ȣ��" << endl;
	delete[] _Myptr;
}

m_string& m_string::operator=(const m_string& rhs)
{
	//cout << "���Կ����� ȣ��" << endl;
	delete[] _Myptr;	//������ �����ϴ� ������ �����ϰ� �� ���� �Ҵ� �غ�
	_Mysize = strlen(rhs._Myptr) + 1;
	_Myptr = new char[_Mysize];		
	strcpy(_Myptr, rhs._Myptr);

	return *this;	//��ü ��ȯ
}

m_string m_string::operator+(const m_string& rhs)
{
	//cout << "���� ������ ȣ��" << endl;
	char* str = new char[_Mysize + rhs._Mysize - 1];
	strcpy(str, _Myptr);
	strcat(str, rhs._Myptr);
	m_string temp(str);
	delete[]str;

	return temp;
}

int m_string::operator==(const m_string& rhs)
{
	//cout << "�� ������ ȣ��" << endl;
	return strcmp(_Myptr, rhs._Myptr) ? -1 : 0;
}

int m_string::size(void) 
{
	return strlen(_Myptr);
}

const char* m_string::c_str(void) 
{
	return _Myptr;
}

int main(void)
{
	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}

