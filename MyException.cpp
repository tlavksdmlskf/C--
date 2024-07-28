#include "iostream"
#include "string"
using namespace std;

class MyException {
	int lineNo;
	string func, msg;
public:
	MyException(int n, string f, string m) {
		lineNo = n; func = f; msg = m;
	}
	void print() { cout << func << ":" << lineNo << ", " << msg << endl; }
};

class DivideByZereException : public MyException {
public:
	DivideByZereException(int lineNo, string func, string msg) : MyException(lineNo, func, msg){}
};

class InvalidInputException : public MyException {
public:
	InvalidInputException(int lineNo, string func, string msg) : MyException(lineNo, func, msg) {}
};

int main() {
	int x, y;
	try {
		cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요 >> ";
		cin >> x >> y;
		if (x < 0 || y < 0)
			throw InvalidInputException(32, "main()", "음수 입력 예외 발생");
		cout << (double)x / (double)y;
	}
	catch (DivideByZereException& e) {
		e.print();
	}
	catch (InvalidInputException& e) {
		e.print();
	}
}

