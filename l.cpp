#include "iostream"
#include "string"
using namespace std;

int main() {
	string s;
	cout << "7+32+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;
	while (true) {
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) {
			string part = s.substr(startIndex);
			if (part == "")break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);
		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "���ڵ��� ���� " << sum;
	sum = 0;
	for (int i = 1; i <= 50
		; i++) {
		sum += i;
	}
	cout << "���ڵ��� ���� " << sum;
}