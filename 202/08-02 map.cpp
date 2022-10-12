#include <iostream>
#include <string>
#include <map>

using namespace std;

//김신: 공유
//지은탁: 김고은
//저승사자: 이동욱
//써니: 유인나

//arr["김신"] = "공유"
//arr["저승사자"] = "이동욱"

int main(void) {
    //map<key 자료형, value 자료형>
    map<string, string> m;
    m["김신"] = "공유";
    m["저승사자"] = "이동욱";
    m["지은탁"] = "김고은";
    m["써니"] = "유인나";
    
    map<string, string>::iterator iter;

    //벡터의 원소들을 출력(iterator)
    //삽입할 때마다 key는 자동 정렬됨
    for (iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << "역 " << iter->second << endl;
    }

    cout << endl;

    //key가 존재하는지 체크
    cout << "주인공은 " << m["김신"] << endl;

    return 0;
}