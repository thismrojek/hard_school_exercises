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
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				cout << "Pierwszy element z podtablicy " << i << " ma wartosc: " << array[i][j] << endl;
			}
		}
	}
	
	return 0;
}

