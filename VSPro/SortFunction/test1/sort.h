#ifndef SORT_H
#define SORT_H

void swap(int *a, int *b);
void showArr(int *arr, int n);

void bubble(int *arr, int n);//∏¥‘”∂»O£®n2)
void insertSort(int *arr, int n);
void selectionSort(int *arr, int n);
void quickSort(int *arr, int left, int right);
void shellSort(int *arr, int len);
void heapSort(int *arr, int len);

void mergeSort(int *arr, int s, int len);

#endif