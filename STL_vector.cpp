#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> numbers;//объявление vectra  "numbers"
	numbers.push_back(0);//вставление элемента с конца

	for (int i = 1; i <= 10; i++) {
		numbers.push_back(i);
	}

	//способы распечатки при помощи итератора ;
	for (auto it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl; //значение элемента
		cout << &it << endl; //адрес итератора
		cout << &(*it) << endl;//aдрес элемента
	}


	cin.get();
}
