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

    for (int car = 0; car < 3; car++) {
        for (int month = 0; month < 4; month++) {
            cout << "Samochod nr: " << (car + 1) << " przejechal w miesiacu nr: " << (month + 1) << " " << carsMileage[car][month] << " km" << endl;
        }
    }
	
	return 0;
}