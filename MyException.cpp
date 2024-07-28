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
		cout << "�������� �մϴ�. �� ���� ���� ������ �Է��ϼ��� >> ";
		cin >> x >> y;
		if (x < 0 || y < 0)
			throw InvalidInputException(32, "main()", "���� �Է� ���� �߻�");
		cout << (double)x / (double)y;
	}
	catch (DivideByZereException& e) {
		e.print();
	}
	catch (InvalidInputException& e) {
		e.print();
	}
}

