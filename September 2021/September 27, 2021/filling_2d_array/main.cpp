#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int array[3][2];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Podaj dowolna liczbe... ";
			cin >> array[i][j];
		}
	}
	
	cout << "Teraz wypiszemy wszystkie elementy z tablicy..." << endl;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << array[i][j] << endl;
		}
	}
	
	return 0;
}

