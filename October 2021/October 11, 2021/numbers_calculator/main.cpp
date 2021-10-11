#include <iostream>
using namespace std;

int main()
{
    char operation;
    float num1, num2;

    cout << "Wybierz rodzaj operacji: +, -, *, /: ";
    cin >> operation;

    cout << "Wpisz dwie liczby: ";
    cin >> num1 >> num2;

    switch (operation)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        cout << "Podany operator jest niepoprawny.";
    }

    return 0;
}