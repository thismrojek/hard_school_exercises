#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int array[3][2] = {
		{5, 9},
		{4, 19},
		{1, 88}
	};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << array[i][j] << endl;
		}
	}
	
	return 0;
}
