#include <iostream>
#include <string>
#include <map>

using namespace std;

//���: ����
//����Ź: �����
//���»���: �̵���
//���: ���γ�

//arr["���"] = "����"
//arr["���»���"] = "�̵���"

int main(void) {
    //map<key �ڷ���, value �ڷ���>
    map<string, string> m;
    m["���"] = "����";
    m["���»���"] = "�̵���";
    m["����Ź"] = "�����";
    m["���"] = "���γ�";
    
    map<string, string>::iterator iter;

    //������ ���ҵ��� ���(iterator)
    //������ ������ key�� �ڵ� ���ĵ�
    for (iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << "�� " << iter->second << endl;
    }

    cout << endl;

    //key�� �����ϴ��� üũ
    cout << "���ΰ��� " << m["���"] << endl;

    return 0;
}