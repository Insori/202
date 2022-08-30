#include <iostream>

using namespace std;

class SM
{
public:
	void 춤추기(void);
	void 노래하기(void);

private:
	string 데뷔연도;
	string 성별;
};

class 레드벨벳 : public SM
{
public:
	void 필마이리듬(void);

private:
	string 맏내;
};

class 엔시티드림 : public SM
{
public:
	void 비트박스(void);

private:
	string 막내;
};