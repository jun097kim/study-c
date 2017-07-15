#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	while (!getline(cin, s).eof()) {	// fgets()와 달리 \n 전까지만 입력받음
		cout << s << "\n";
	}

	return 0;
}