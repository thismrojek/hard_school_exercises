#include <iostream>
using namespace std;

// Zmienne pomocnicze
int minValue;
int maxValue;

void getValueFromUser() {
    // Tryb wprowadzania liczby
    int tempValue;
    cout << "Podaj wartosc z kawiatury: ";
    cin >> tempValue;

    // Sprawdzanie, czy wartość jest najmniejsza do tej pory 
    if (minValue > tempValue) {
        minValue = tempValue;
    }

    // Sprawdzanie, czy wartość jest największa do tej pory 
    if (maxValue < tempValue) {
        maxValue = tempValue;
    }

    // Ponowne włączanie trybu wprowadzania liczb, jeżeli wprowadzona liczba jest większa od 0.
    if (tempValue > 0) {
        getValueFromUser();
    }
}

int main() {
    getValueFromUser();

    // Po zakończeniu wykonywania funkcji getValueFromUser wypisuję liczby:
    cout << "Najmniejsza wartosc: " << minValue << endl;
    cout << "Najwieksza wartosc: " << maxValue << endl;

    return 0;
}
