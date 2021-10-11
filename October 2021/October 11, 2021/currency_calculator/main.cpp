#include <iostream>
using namespace std;

void countEuro(int number)
{
	cout << "Gdy masz " << number << " euro, masz " << number * 4 << " zl";
}

int main()
{
	int num;
	cout << "Ile masz euro? ";
	cin >> num;
	countEuro(num);
}
