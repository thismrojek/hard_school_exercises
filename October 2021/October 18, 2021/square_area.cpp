#include <iostream>
using namespace std;

int calculateSquareArea(int sideLength) {
    int squareArea = sideLength * sideLength;
    return squareArea;
}

int main() {
    int sideLength;
	cout << "Podaj dlugosc boku kwadratu: ";
    cin >> sideLength;
    cout << "Pole kwadratu o podanym boku wynosi: " << calculateSquareArea(sideLength);
}
