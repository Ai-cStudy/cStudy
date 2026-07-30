#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main() {

	map<string, int> a;

	a["Kim"] = 100;
	a["Lee"] = 90;
	a["Park"] = 80;
	a["Choi"] = 70;

	a.insert({ "apple",10 });
	a.insert({ "Kim",10 }); // 같은 키 값으로 삽입을 하면 아무 일도 일어나지 않는다.
	a.emplace("banana",30 );
	

	a["Kim"] = 80; // 이렇게 해야 값이 바뀜

	if (a.find("apple") != a.end()) {
		cout << "iss" << endl;
	}

	if (a.count("apple") == 1) {
		cout << "is!" << endl;
	}

 
	



	for (auto x : a) {
		cout << x.first << ":" << x.second << endl;

	}

	cout << a.size();

	

}
