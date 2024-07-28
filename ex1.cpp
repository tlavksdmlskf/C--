#include "iostream"
using namespace std;

int main() {
	int divisor = 0;

	try {
		if (divisor == 0) throw 0;
	}

	catch (int a) {
		cout << "예외 : " << a << endl;
	}

	int result = 10 / divisor;
	cout << "결과 : " << result << endl;
	return 0;
}