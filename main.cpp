#include <iostream>
using namespace std;


int calcNumOfRepeats(int arr[], int arrLen, int num) {
	int counter = 0;
	for (int i = 0; i < arrLen; i++) {
		if (arr[i] == num) {
			counter++;
		}
	}

	return counter;
}

int findOddRepeat(int arr[], int arrLen) {
	for (int i = 0; i < arrLen; i++) {
		if (calcNumOfRepeats(arr, arrLen, arr[i]) % 2 == 1) {
			return arr[i];
		}
	}
}


int main(void) {
  
  // For example: this array contains some of repeated numbers, so the function (findOddRepeat) will return the element (number) which was repeated odd number of times.
  // In this example, the number which was repeated odd number of times is (5).
	int array[] = { 20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5 };
	int arrayLenght = sizeof(array) / sizeof(array[0]);
	
	cout << findOddRepeat(array, arrayLenght) << endl;

	

	
	
	return 0;
}

