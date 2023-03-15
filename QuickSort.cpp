// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
T partition(vector<T>& arr, int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	// Giving pivot element its correct position
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	// Sorting left and right parts of the pivot element
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}
template<typename T> 
void DoQuickSort(vector<T>& arr, int start, int end)
{

	// base case
	if (start >= end)
		return;

	// partitioning the array
	T p = partition(arr, start, end);

	// Sorting the left part
	DoQuickSort(arr, start, p - 1);

	// Sorting the right part
	DoQuickSort(arr, p + 1, end);
}
template<typename T>
void quickSort(vector<T>& arr) {
    
    DoQuickSort(arr, 0, arr.size() - 1); 
}
template<typename T>
void PrintArray(vector<T>& arr)
{
    int n = arr.size(); 
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n\n";
}
int main()
{

    std::vector<double> arr {2.1, 1.7, 8, 5, 6};

	quickSort(arr);

    PrintArray(arr); 
	

	return 0;
}


 



