#include "iostream";
using namespace std;

template <class T>

void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 9, b = 3;
	myswap(a, b);
}