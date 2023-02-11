#include "InsertionSort.h"
#include <iostream>

using namespace std;

void InsertionSort::insertionSort(int arr[], int n)
{
	int i, j, key;
	
	//Inner and outer loops to sort the array.
	for (i = 1; i < n; i++)
	{
		
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void InsertionSort::printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}