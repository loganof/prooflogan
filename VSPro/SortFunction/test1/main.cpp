//6种经典的排序算法
#include <iostream>				
#include "sort.h"
using namespace std;


int main()
{

	int arr[]={2344,8,3, 4, 5, 8, 2, 22, 44, 456, -2};
	int length = sizeof(arr) / sizeof(arr[0]);

	showArr(arr, length);
	//bubble(arr, length);
	//insertSort(arr, length);
	//selectionSort(arr,length);
	//quickSort(arr, 0, length - 1);
	//shellSort(arr,length);
	heapSort(arr, length);
	//mergeSort(arr, 1, length);
	showArr(arr, length);
	

	system("pause");
	return 0;
}