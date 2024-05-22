#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> numbers;//объявление vectra  "numbers"
	//numbers.push_back(0);//вставление элемента с конца

	for (int i = 1; i <= 10; i++) {
		numbers.push_back(i);
	}

	cout << "Size : " << numbers.size() << endl; //текущий размер вектора
	cout << "Max size : " << numbers.max_size() << endl;//максимальный размер
	cout << "Capacity : " << numbers.capacity() << endl;//вместимость
	numbers.resize(5); //изменение размера вектора до 5
	cout << "Size : " << numbers.size() << endl;//текущий размер вектора
	if (numbers.empty()) {
		cout << "Vector is empty\n";
	}
	else {
		cout << "Vector is not empty\n";
	}
	cout << "Element [0] is " << numbers[0] << endl;//доступ к елементу[0]
	cout << "Element at(0) is : " << numbers.at(0)<<endl;//доступ к елементу[0]через at(0)
	cout << "Front : " << numbers.front() << endl;//фронтальный элумент
	cout << "Beck :" << numbers.back() << endl;
	numbers.clear(); //очистка
	cout << "Size : " << numbers.size() << endl;//текущий размер вектора

	cin.get();
}
