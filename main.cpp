#include "sortAlgorithms.hpp"

int main()
{
    vector<int> arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    int n = arr.size();
    selectionSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    insertionSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    shellSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    bubbleSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    heapSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    mergeSort(arr, 0, n - 1);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    quickSort(arr, 0, n - 1);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    radixSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    vector<int> outputArrOfCountingSort = countingSort(arr, n);
    print(outputArrOfCountingSort, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    binaryInsertionSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    shakerSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    flashSort(arr, n);
    print(arr, n);
    arr = { 9, 2, 4, 3, 8, 5, 7, 1 };
    return 0;
}
