#pragma once
#ifndef _SORTALGORITHMS_HPP_
#define _SORTALGORITHMS_HPP_
#include "myLibrary.hpp"

void selectionSort(vector<int> arr, int n);

void insertionSort(vector<int> arr, int n);

void shellSort(vector<int> arr, int n);

void bubbleSort(vector<int> arr, int n);

void heapify(vector<int> arr, int n, int i);

void heapSort(vector<int> arr, int n);

void Merge(vector<int>& arr, int left, int mid, int right);

void mergeSort(vector<int>& arr, int left, int right);

int Partition(vector<int>& arr, int low, int high);

void quickSort(vector<int>& arr, int low, int high);

int getMax(vector<int>& arr, int n);

void countSort(vector<int>& arr, int n, int exp);

void radixSort(vector<int>& arr, int n);

vector<int> countingSort(vector<int>& arr, int n);

int binarySearch(vector<int> arr, int item, int low, int high);

void binaryInsertionSort(vector<int>& a, int n);

void shakerSort(vector<int>& arr, int n);

void flashSort(vector<int>& a, int n);

void print(vector<int> arr, int n);

#endif