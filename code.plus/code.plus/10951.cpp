#include <iostream>
using namespace std;

int main() {
	int a, b;

	
	// cin >>: �ڷ����� �´� ���� ���Դ��� bool �� ����. EOF�� �ԷµǸ� false
	while (cin >> a >> b) {
		cout << a + b << '\n';
	}
}