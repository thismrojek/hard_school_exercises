#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int array[10];
	float sumOfElements = 0;
	
	cout << "Za moment poprosimy Cie o podanie kilku losowych liczb naturalnych..." << endl;
	
	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe numer " << (i + 1) << ": ";
		cin >> array[i];
		sumOfElements += array[i];
	}
	
	cout << "Teraz wyswietlimy wszystkie elementy..." << endl;
	
	for (int i = 0; i < 10; i++) {
		cout << "Element " << (i + 1) << ": " << array[i] << endl;
	}
	
	float average = sumOfElements / 10;
	
	cout << "Srednia arytmetyczna wszystkich elementow wynosi: " << average;
	
	
	return 0;
}
