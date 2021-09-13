#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int array[8] = {1, 2, 4, 6, 8, 11, 15, 19};
	
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			cout << array[i];
			if (i < 6) {
				cout << ", ";
			}
		}	
	}
	
	return 0;
}

