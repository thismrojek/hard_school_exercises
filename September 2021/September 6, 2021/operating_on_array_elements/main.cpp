#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int array[13];
	bool has19 = false;
	int maxValue;
	
	cout << "Za moment poprosimy Cie o podanie kilku losowych liczb naturalnych..." << endl;
	
	for (int i = 0; i < 13; i++) {
		cout << "Podaj liczbe numer " << (i + 1) << ": ";
		cin >> array[i];
	}
	
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			maxValue = array[i];
		}
		if (maxValue < array[i]) {
			maxValue = array[i];
		}
	}
	
	for (int i = 0; i < 13; i++) {
		if (array[i] == 19) {
			has19 = true;
		}
	}

	if (has19) {
		cout << "Tablica zawiera wartosc 19."  << endl;
	} else {
		cout << "Tablica nie zawiera wartosci 19."  << endl;
	}
	
	cout << "Najwieksza wartosc w tej tablicy to: " << maxValue << endl;
	
	
	return 0;
}
