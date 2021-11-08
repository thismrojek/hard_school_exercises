#include <iostream>
using namespace std;

float chooseFuelType() {
    float choosenFuelType;
    cout << "Jakiego paliwa uzywasz? PB [0] / ON [1]? ";
    cin >> choosenFuelType;

    if(choosenFuelType == 0 || choosenFuelType == 1) {
        return choosenFuelType;
    } else {
        chooseFuelType();
    }
}

float calculateFuelPrice(float fuelType) {
    float drivenKM;
    float fuelPerKM;

    cout << "Podaj ile przejechales swoim pojazdem (km): ";
    cin >> drivenKM;

    cout << "Podaj ile Twoj pojazd spala paliwa na 100 kilometrow: ";
    cin >> fuelPerKM;

    if (fuelType == 0) {
        return (drivenKM * fuelPerKM / 100 * 5.85);
    } else if (fuelType == 1) {
        return (drivenKM * fuelPerKM / 100 * 5.99);
    }
}

int main() {
    float choosenFuelType = chooseFuelType();
    float fuelPrice = calculateFuelPrice(choosenFuelType);

    if (fuelPrice) {
        cout << "Ta trasa kosztowac cie bedzie: " << choosenFuelType << " PLN." << endl;
    } else {
        cout << "Podane dane sa nieprawidlowe.";
    }

    return 0;
}
