#include "iostream";
#include "string"
using namespace std;

using namespace std;

void Type1(string msg, int no, double value) {
	cout << msg << ", 에러 번호 : " << no << ", 오류값 : " << value << endl;

}

void Type2(int no, double value) {
	cout << no << ", 오류값 : " << value << endl;

}

template<typename... T>
void PrintLog(T... arg8) {
	Type1(arg8...);
}

int main() {
	PrintLog<string, int, double>("Warning", 100, 22.5);
	return 0;
}