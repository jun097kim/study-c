#include <iostream>
using namespace std;

int main() {
	int a, b;

	
	// cin >>: 자료형에 맞는 값이 들어왔는지 bool 값 리턴. EOF가 입력되면 false
	while (cin >> a >> b) {
		cout << a + b << '\n';
	}
}