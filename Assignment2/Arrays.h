#pragma once

int find(int* arr, int size, int n);
// accepts value, array, and array length
// returns index of first occurence of value

int replace(int* arr, int index, int n);
// accepts index, value, array
// replaces value at index with given value and returns the old value

int add(int*& arr, int size, int n);	// pass pointer by reference in order to reassign it
// accepts value, array, and array length
// adds value to the end of the array and returns the new size

int remove(int*& arr, int size, int index);	// pass pointer by reference
// accepts index, array, and array length
// removes element at index location and returns the new size