#include <iostream>
using namespace std;

int calculateSquareArea(int sideLength) {
    if (sideLength > 0) {
        int squareArea = sideLength * sideLength;
        return squareArea;
    } else {
        return false;
    }
}

int main() {
    int sideLength;
	cout << "Podaj dlugosc boku kwadratu: ";
    cin >> sideLength;
    
    if (calculateSquareArea(sideLength)) {
        cout << "Pole kwadratu o podanym boku wynosi: " << calculateSquareArea(sideLength);
    } else {
        cout << "Podany bok kwadratu nie pozwala na obliczenie pola.";
    }
}
