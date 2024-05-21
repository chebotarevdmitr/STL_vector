#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> numbers;//объявление vectra  "numbers"
	//numbers.push_back(0);//вставление элемента с конца

	for (int i = 1; i <= 10; i++) {
		numbers.push_back(i);
	}

	//способы распечатки при помощи итератора ;
	for (auto it = numbers.cbegin(); it != numbers.cend(); it++) {
		*it = 20; // cообщение об ошибке (const не допустимо)
		cout << *it << endl; 
	}


	cin.get();
}
