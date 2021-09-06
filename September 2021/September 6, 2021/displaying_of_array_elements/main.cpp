#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int array[5];
	
	cout << "Za moment poprosimy Cie o podanie kilku losowych liczb naturalnych..." << endl;
	
	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbe numer " << (i + 1) << ": ";
		cin >> array[i];
	}
	
	cout << "Teraz wyswietlimy wszystkie elementy..." << endl;
	
	for (int i = 0; i < 5; i++) {
		cout << "Element " << (i + 1) << ": " << array[i] << endl;
	}
	
	return 0;
}
