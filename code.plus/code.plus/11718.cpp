#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	while (!getline(cin, s).eof()) {	// fgets()�� �޸� \n �������� �Է¹���
		cout << s << "\n";
	}

	return 0;
}