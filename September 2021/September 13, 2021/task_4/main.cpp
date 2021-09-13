#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int lessThanEleven = 0;
	int array[8] = {1, 2, 4, 6, 8, 11, 15, 19};
	
	for (int i = 0; i < 8; i++) {
		if (array[i] < 11) {
			lessThanEleven++;
		}
	}
	
	cout << lessThanEleven << " elementow tablicy jest mniejszych niz 11.";
	
	return 0;
}

