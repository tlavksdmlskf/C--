#include "iostream"
using namespace std;

int main() {
	int divisor = 0;

	try {
		if (divisor == 0) throw 0;
	}

	catch (int a) {
		cout << "���� : " << a << endl;
	}

	int result = 10 / divisor;
	cout << "��� : " << result << endl;
	return 0;
}