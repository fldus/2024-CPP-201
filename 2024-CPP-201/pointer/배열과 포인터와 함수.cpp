#include <stdio.h>

// 배열 모든 원소를 0으로.
void erase(int* _arr, int _length) {
	for (int i = 0; i < _length; i++) {
		_arr[i] = 0;
	}
}

int main(void) {
	int arr[4] = { 10, 20, 30, 40 };
	int length = sizeof(arr) / sizeof(*arr);
	
	erase(arr, length);
	
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}