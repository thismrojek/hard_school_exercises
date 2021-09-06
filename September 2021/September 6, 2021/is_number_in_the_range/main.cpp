#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int numberToCheck;
	
	cout << "Podaj dowolna liczbe calkowita... ";
	cin >> numberToCheck;
	
	if ((numberToCheck >= 1 && numberToCheck <= 10) || (numberToCheck >= 17 && numberToCheck <= 21)) {
		cout << "Podana liczba jest z przedzialu <1, 10> lub <17, 21>";
	} else {
		cout << "Podana liczba nie jest z przedzialu <1, 10> lub <17, 21>";
	}
	
	return 0;
}
