#include <iostream>
#include "InsertionSort.h"
#include <algorithm>
#include <Chrono>
#include <stdio.h>
#include <Windows.h>
#include <ctime>

using namespace std;
using namespace std::chrono;

int main()
{
	// The initial array with 10000 numbers. Uses rand to get 10000 random numbers in array
	int arr[10000];
	
	for (int i = 0; i < 10000; i++)
	{
		arr[i] = rand() % 10000;
	}

	int n = sizeof(arr) / sizeof(arr[0]);

	// Sorts Array using Insetion Sort
	auto start = high_resolution_clock::now();

	InsertionSort IS;
	IS.insertionSort(arr, n);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	
	// Prints Array
	IS.printArray(arr, n);

	cout << endl << duration.count() << " Microseconds taken for Inserion Sort" << endl;

	// Sorts Array using Library Sort (combination of QuickSort, HeapSort and InsertionSort)
	auto start2 = high_resolution_clock::now();

	sort(arr, arr + n);

	auto stop2 = high_resolution_clock::now();
	auto duration2 = duration_cast<microseconds>(stop2 - start2);

	cout << endl << duration2.count() << " Microseconds taken for Library Sort" << endl;
}