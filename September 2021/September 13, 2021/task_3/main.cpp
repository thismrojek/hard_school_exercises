#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int sum = 0;
	int array[8] = {1, 2, 4, 6, 8, 11, 15, 20};
	
	for (int i = 0; i < 8; i++) {
		sum += array[i];
	}
	
	cout << "Suma elementow w tablicy wynosi: " << sum;
	
	return 0;
}

