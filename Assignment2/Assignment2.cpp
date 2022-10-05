#include <iostream>
#include <vector>

#include "Arrays.h"
#include "Professional.h"
#include "Nonprofessional.h"

int main() {
	/* 
	 *		Test code for Part 1 (Arrays)
	 */

	int size = 9;
	int* arr = new int[size] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	try {
		size = remove(arr, size, 5); // will throw error if index is changed to 10 or higher or below 0
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	catch (std::invalid_argument& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		size = add(arr, size, 7); // will throw error if size is changed to below 0
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


	/*
	 *		Test code for Part 2 (Inheritance)
	 */

	// Professionals get a set number of vacation days when hired, and this number can be changed any time
	// The health insurance contribution ends up being 65% of the total premium
	Professional don("2389hf3", "Don", "Johnson", 500, 5000, 14);
	std::cout << don.calculateHealthcareContribution() << std::endl;

	// Nonprofessionals get a 1 vacation day for every 140 hours worked, 
	// giving a full time worker about 2 weeks of vacation per year
	// The health insurance contribution ends up being 75% of the total premium
	Nonprofessional jack("sdfj83k", "Jack", "Harlow", 400, 20, 36);
	std::cout << jack.calculateHealthcareContribution() << std::endl;

	/*
	 *		End Part 1
	 */
}