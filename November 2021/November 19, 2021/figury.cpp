#include <iostream>
using namespace std;

int main() {
    int pickedOption;
    int a, b, c;

    cout << "Wybrana przez Ciebie figura to kwadrat [0], czy prostokat [1]?";
    cin >> pickedOption;

    switch (pickedOption) {
        case 0:
            cout << "Podaj bok a: ";
            cin >> a;
            cout << "Pole tego kwadratu to: " << a * a;
            break;

        case 1:
            cout << "Podaj bok b: ";
            cin >> b;
            cout << "Podaj bok c: ";
            cin >> c;
            cout << "Pole tego prostokata to: " << b * c;
            break;
        
        default:
            cout << "Ta figura nie jest obslugiwana. Wybierz [0] lub [1].";
            break;
    }

    return 0;
}
