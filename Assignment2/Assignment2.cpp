#include <iostream>
#include <vector>

#include "Arrays.h"

int main() {
	/* 
	 *		Test code for Part 1 (Arrays)
	 */
	int size = 9;
	int* arr = new int[size] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	try {
		size = remove(arr, size, 5);
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	catch (std::invalid_argument& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		size = add(arr, size, 12);
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	catch (std::invalid_argument& e) {
		std::cout << e.what() << std::endl;
	}

	/* 
	 *		End Part 1
	 */

}