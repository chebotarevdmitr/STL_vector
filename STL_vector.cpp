#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> numbers;//объявление vectra  "numbers"
	//numbers.push_back(0);//вставление элемента с конца

	for (int i = 1; i <= 10; i++) {
		numbers.push_back(i);
	}

	numbers.insert(numbers.begin() + 5, 88);//вставка
	numbers.erase(numbers.begin() + 5);     //удаление

	for (auto n : numbers) {
		cout << n << endl;
	}

	cin.get();
}
