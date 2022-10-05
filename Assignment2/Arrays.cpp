#include "Arrays.h"
#include <iostream>
#include <string>

using namespace std;


int find(int* arr, int size, int n) {
	if (size < 0)
		throw invalid_argument("Invalid size");

	for (int i = 0; i < size; i++)
		if (arr[i] == n) return i;
	return -1;
}

int replace(int* arr, int index, int n) {
	if (index < 0)
		throw invalid_argument("Index not in range");

	int x = arr[index];
	arr[index] = n;
	return x;
}

int add(int*& arr, int size, int n) {
	if (size < 0)
		throw invalid_argument("Invalid size");

	int* oldArr = arr;		// point at given array

	arr = new int[size + 1];	// create new array with one extra element

	for (int i = 0; i < size; i++)	// copy contents from old array to new array
		arr[i] = oldArr[i];

	arr[size] = n;	// add last element

	delete[] oldArr; // deallocate old array

	return size + 1;
}

int remove(int*& arr, int size, int index) {
	if (size < 0)
		throw invalid_argument("Invalid size");
	if (index < 0 || index >= size)
		throw invalid_argument("Index " + to_string(index) + " not in range 0.." + to_string(size));

	int* oldArr = arr;	// point at given array 

	arr = new int[size - 1];	// create new array with one less element

	int arrPos = 0;	// counter for new array

	for (int i = 0; i < size; i++) {
		if (i == index) continue;	// do not copy target index
		arr[arrPos++] = oldArr[i];	// only increment arrPos when element has been copied
	}

	delete[] oldArr;	// deallocate old array

	return size - 1;
}