#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> numbers;//объявление vectra  "numbers"
	numbers.push_back(0);//вставление элемента с конца

	for (int i = 1; i <= 10; i++) {
		numbers.push_back(i);
	}

	for (int number : numbers) //перввый способ распечатки
		cout << number << endl;

	cin.get();
}
