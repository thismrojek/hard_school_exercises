#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int minIndex;
	int minValue;
	int maxIndex;
	int maxValue;
	
	int array[8] = {1, 2, 4, 6, 8, 11, 15, 19};
	
	for (int i = 0; i < 8; i++) {
		if (array[i] < minValue) {
			minIndex = i;
			minValue = array[i];
		}
		if (array[i] > maxValue) {
			maxIndex = i;
			maxValue = array[i];
		}
	}
	
	cout << "Najmniejsza wartosc to: " << minValue << ", posiada index: " << minIndex << endl;
	cout << "Najwieksza wartosc to: " << maxValue << ", posiada index: " << maxIndex << endl;
	
	return 0;
}

