#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int array[3][2];
	int sum = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Podaj dowolna liczbe... ";
			cin >> array[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 2; j++) {
				sum += array[i][j];
			}
		}
	}
	
	cout << "Suma wartosci wszystkich elementow z podtablic o parzystych indeksach wynosi " << sum << endl;
	
	return 0;
}

