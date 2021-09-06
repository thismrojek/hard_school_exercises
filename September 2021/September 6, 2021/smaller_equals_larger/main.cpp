#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int numberToCheck;
	
	cout << "Podaj dowolna liczbe naturalna... ";
	cin >> numberToCheck;
	
	if (numberToCheck < 0) {
		cout << "Podana liczba jest mniejsza niz 0.";
	} else if (numberToCheck > 0) {
		cout << "Podana liczba jest wieksza niz 0.";
	} else {
		cout << "Podana liczba jest rowna 0.";
	}
	
	return 0;
}
