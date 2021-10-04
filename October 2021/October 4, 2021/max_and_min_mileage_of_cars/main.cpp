#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int carsMileage[3][4] = {
        {
            35000,
            22145,
            45981,
            31012
        },
        {
            26771,
            34121,
            36900,
            22096
        },
        {
            45332,
            41100,
            39498,
            44128
        }
    };
    int sumaricCarsMileage[3];
    int carWithMinMileage, carWithMaxMileage;

    for (int car = 0; car < 3; car++) {
        for (int month = 0; month < 4; month++) {
            sumaricCarsMileage[car] += carsMileage[car][month];
        }
    }

    for (int car = 0; car < 3; car++) {
        if (sumaricCarsMileage[car] > sumaricCarsMileage[car + 1]) {
            carWithMaxMileage = car;
        } else if (sumaricCarsMileage[car] < sumaricCarsMileage[car + 1]) {
            carWithMinMileage = car;
        }
    }

    cout << "Auto z najwiekszym przebiegiem: " << (carWithMaxMileage + 1) << endl;
    cout << "Auto z najmniejszym przebiegiem: " << (carWithMinMileage + 1) << endl;

    for (int car = 0; car < 3; car++) {
        cout << "Laczny przebieg auta nr: " << (car + 1) << " wynosi: " << sumaricCarsMileage[car] << ", a sredni przebieg miesieczny: " << (sumaricCarsMileage[car] / 4) << endl;
    }

    for (int car = 0; car < 3; car++) {
        if (carsMileage[car][0] % 2 == 0 && 
            carsMileage[car][1] % 2 == 0 &&
            carsMileage[car][2] % 2 == 0 &&
            carsMileage[car][3] % 2 == 0
        ) {
            cout << "Samochod nr: " << (car + 1) << "posiada wszystkie wartosci przebiegu jako liczbe patrzysta." << endl;
        }
    }
	
	return 0;
}