#include <iostream>
#include "iter.hpp"

void incrementInt(int &i) { 
	i++; 
}

void incrementDouble(double &i) { 
	i++; 
}

void incrementString(std::string &i) { 
	i = i + " number"; 
}

int main() {

	int *arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	::iter(arr, 10, &incrementInt);
	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
	delete[] arr;

	double *arr2 = new double[10];
	for (int i = 0; i < 10; i++) {
		arr2[i] = 0.5 + (double)i;
		std::cout << arr2[i] << ' ';
	}
	std::cout << std::endl;
	::iter(arr2, 10, &incrementDouble);
	for (int i = 0; i < 10; i++)
		std::cout << arr2[i] << ' ';
	std::cout << std::endl;
	delete[] arr2;

	std::string *arr3 = new std::string[10];
	for (int i = 0; i < 10; i++) {
		arr3[i] = std::to_string(i);
		std::cout << arr3[i] << ' ';
	}
	std::cout << std::endl;
	::iter(arr3, 10, &incrementString);
	for (int i = 0; i < 10; i++)
		std::cout << arr3[i] << ' ';
	std::cout << std::endl;
	delete[] arr3;
	
	return 0;
}