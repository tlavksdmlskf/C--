#include "iostream"
#include "vector"

using namespace std;

int main() {
	vector<int> data;
	data.assign(5, 100);

	for (int i = 0; i < data.size(); i++)
		cout << "data " << i << " : " << data.at(i) << endl;

	data.front() = 1;
	data.back() = 2;

	if (data.empty() == true) {
		cout << "벡터가 비어 있습니다" << endl;
	}
	else {
		for (int i = 0; i < data.size(); i++)
			cout << "data " << i << " : " << data.at(i) << endl;
	}

	return 0;
}
