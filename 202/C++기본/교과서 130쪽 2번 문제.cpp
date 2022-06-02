#include <iostream>
#include <string.h>

using namespace std;

class CBank 
{
private:
	string name;
	string account;
	int balance;

public:
	CBank(int bBalance);
};

int main(void)
{
	CBank b = CBank(5000);	//입금액
}

CBank::CBank(int bBalance)
	:balance(bBalance)
{
	cout << "입금액: " << bBalance << endl;
}