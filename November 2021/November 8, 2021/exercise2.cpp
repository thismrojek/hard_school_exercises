#include <iostream>
using namespace std;

float number1, number2;
int type;

float dodawanie() {
    return number1 + number2;
}

float odejmowanie() {
    return number1 - number2;
}

float mnozenie() {
    return number1 * number2;
}

float dzielenie() {
    return number1 / number2;
}

void getDataFromUser() {
    // Podanie dwóch liczb...
    cout << "Podaj pierwsza liczbe... ";
    cin >> number1;
    cout << "Podaj druga liczbe... ";
    cin >> number2;

    // I wybór schematu działań...
    cout << "Dostepne dzialania: " << endl;
    cout << "[0] dodawanie" << endl;
    cout << "[1] odejmowanie" << endl;
    cout << "[2] mnozenie" << endl;
    cout << "[3] dzielenie" << endl;
    cout << "Twoj wybor: ";
    cin >> type;
}

void showResults() {
    cout << "Wynik to: ";
    switch(type) {
        case 0:
            cout << dodawanie();
            break;
        case 1:
            cout << odejmowanie();
            break;
        case 2:
            cout << mnozenie();
            break;
        case 3:
            cout << dzielenie();
            break;
    }
}

int main() {
    getDataFromUser();
    showResults();

    return 0;
}
