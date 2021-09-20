#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int minIndex;
	int minValue;
	int maxIndex;
	int maxValue;
	
	int array[14] = {1, 2, 4, 6, 8, 11, 15, 19, 1, 3, 99, 54, 13, 14};
	
	// podpunkt 1
	for (int i = 0; i < 14; i++) {
		if (array[i] < minValue) {
			minIndex = i;
			minValue = array[i];
		}
		if (array[i] > maxValue) {
			maxIndex = i;
			maxValue = array[i];
		}
	}
	
	cout << "Najmniejsza wartosc to: " << minValue << ", posiada indeks: " << minIndex << endl;
	cout << "Najwieksza wartosc to: " << maxValue << ", posiada indeks: " << maxIndex << endl;
	
	// podpunkt 2
	cout << endl << "Wartosci elementow o indeksach podzielnych przez 6: ";
	
	for (int i = 0; i < 14; i++) {
		if (i != 0 && i % 6 == 0) {
			cout << array[i] << " ";
		}
	}
	
	cout << endl;
	
	// podpunkt 3
	int typedNumber;
	bool numberExistInArray = false;
	cout << endl << "Podaj dowolna liczbe... ";
	cin >> typedNumber;
	
	for (int i = 0; i < 14; i++) {
		if (array[i] == typedNumber) {
			cout << "Liczba " << typedNumber << " znajduje sie w tablicy na indeksie " << i << endl;
			numberExistInArray = true;
		}
	}
	
	if (!numberExistInArray) {
		cout << "Liczba " << typedNumber << " nie istnieje w tablicy." << endl;
	}
	
	// podpunkt 4
	float sumOfEvenNumbers = 0;
	float countOfEvenNumbers = 0;
	for (int i = 0; i < 14; i++) {
		if (i != 0 && i % 2 == 0 && array[i] > 5) {
			sumOfEvenNumbers += array[i];
			countOfEvenNumbers++;
		}
	}
	cout << endl << "Srednia wartosci parzystych elementow tablicy, wiekszych od 5 wynosi: " << sumOfEvenNumbers / countOfEvenNumbers << endl;
	
	// podpunkt 5
	int sumOfDivisibleBy3And5 = 0;
	for (int i = 0; i < 14; i++) {
		if (i != 0 && (i % 3 == 0 || i % 5 == 0)) {
			sumOfDivisibleBy3And5 += array[i];
		}
	}
	cout << endl << "Suma wartosci elementow, ktorych indeksy sa podzielne przez 3 lub 5 wynosi: " << sumOfDivisibleBy3And5;
	
	// zadanie na 6
	int lowAmplitudesCount = 0;
	for (int i = 0; i < 14; i++) {
		if ((array[i] == array[i + 1] - 1) || (array[i] == array[i + 1] + 1)) {
			lowAmplitudesCount++;
		}
	}
	cout << endl << "Liczba niskich amplitud: " << lowAmplitudesCount;
	
	return 0;
}
