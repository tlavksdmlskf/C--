#include "iostream"
using namespace std;

void process(int value) {
	try {
		if (value < 0) {
			throw -1;
		}
		cout << value << endl;
	}
	catch (int a) {
		cout << "���� �߻�!" << endl;
	}
}

int main() {
	process(10);
	process(-5);

}