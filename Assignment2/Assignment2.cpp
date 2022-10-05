#include <iostream>
#include <vector>

#include "Arrays.h"
#include "Professional.h"
#include "Nonprofessional.h"

void print(int*, int);

int main() {
	/* 
	 *		Test code for Part 1 (Arrays)
	 */

	int size = 9;
	int* arr = new int[size] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	print(arr, size);
	std::cout << std::endl;

	try {
		std::cout << "Removing a number in position 5" << std::endl;
		size = remove(arr, size, 5);
		print(arr, size);

		std::cout << "Removing a number in position 9" << std::endl;
		size = remove(arr, size, 9);
		print(arr, size);
	}
	catch (std::invalid_argument& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "Adding a number to array length " << size << std::endl;
		size = add(arr, size, 7);
		print(arr, size);

		std::cout << "Adding a number to array length -1" << std::endl;
		size = add(arr, -1, 7);
		print(arr, size);
	}
	catch (std::invalid_argument& e) {
		std::cout << e.what() << std::endl;
	}

	/* 
	 *		End Part 1
	 */

	std::cout << std::endl;

	/*
	 *		Test code for Part 2 (Inheritance)
	 */

	// Professionals get a set number of vacation days when hired, and this number can be changed any time
	// The health insurance contribution ends up being 65% of the total premium
	Professional don("2389hf3", "Don", "Johnson", 500, 5000, 14);
	std::cout << "The company will pay for $" << don.calculateHealthcareContribution() << " of the $500 premium for the salary worker" << std::endl;

	// Nonprofessionals get a 1 vacation day for every 140 hours worked, 
	// giving a full time worker about 2 weeks of vacation per year
	// The health insurance contribution ends up being 75% of the total premium
	Nonprofessional jack("sdfj83k", "Jack", "Harlow", 400, 20, 36);
	std::cout << "The company will pay for $" << jack.calculateHealthcareContribution() << " of the $400 premium for the hourly worker" << std::endl;

	/*
	 *		End Part 1
	 */
}

void print(int* arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}