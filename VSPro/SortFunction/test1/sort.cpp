#include "sort.h"
#include <iostream>

void swap(int &a, int &b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

void showArr(int *arr, int n)
{
	std::cout <<"显示结果:" << std:: endl;

	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i]  << std::endl;
	}
}


void bubble(int *arr, int len)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void quickSort(int *arr, int left, int right)
{
	if (left > right)
		return;

	int i = left;
	int j = right;
	int flag = arr[left];

	while(i < j)
	{
		while((i < j) && (arr[j] >= flag)) j--;
		if (i < j)
		{
			arr[i++] = arr[j];
		}

		while((i < j) && (arr[i] <= flag)) i++;
		if (i < j)
		{
			arr[j--] = arr[i];
		}		
	}
	arr[i] = flag;

	quickSort(arr,left, i - 1);
	quickSort(arr, i + 1, right);
}

void insertSort(int *arr, int size)
{
	int i = 0;
	int j = 0;

	for (i = 1; i < size; i++)
	{
		for (j = i; j > 0; j--)
		{
			if (arr[j] < arr[j -1])
			{
				swap(arr[j], arr[j - 1]);
			}
			else
				break;
		}
	}
}

void shellSort(int *arr, int len)
{
	int i, j;
	int step = len;
	int tmp = 0;
	do 
		{
		step = step /3 + 1;
		for (i = step; i < len; i++)
		{
			if (arr[i] < arr[i - step])
			{
				tmp = arr[i];
				for (j = i - step; j >= 0 && tmp < arr[j]; j -= step)
				{
					arr[j + step] = arr[j];					
				}
				arr[j + step] = tmp;
			}
		}
	} while (step > 1);
}

void selectionSort(int *arr, int size)
{
	int i = 0;
	int j = 0;
	int min = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(arr[min],arr[i]);
	}
}

void HeapConstruct(int* arr, int root, int len)
{
	int temp, j;
	temp = arr[root];
	for (j = 2 * root + 1; j < len; j = j * 2 + 1)
	{
		if (j < len - 1 && arr[j] < arr[j + 1])
		{
			++j;
		}
		if (temp >= arr[j])
		{
			break;
		}
		arr[root] = arr[j];
		root = j;
	}
	arr[root] = temp;
}

void heapSort(int *arr, int len)//复杂度为O（logn）
{
	int i;
	for (i = len - 1 ; i >= 0; i-- )
	{
		HeapConstruct(arr, i, len);
	}
	for (i = len - 1; i >= 0; i--)
	{
		swap(arr[0],arr[i]);
		HeapConstruct(arr, 0, i);
	}
}


void Merge(int *ptr, int *arr, int i, int m, int len)
{
	int j, k , n;
	for (j = m + 1, k = i; i <= m && j <= len; k++)
	{
		if (ptr[i] < ptr[j])
		{
			arr[k] = ptr[i++];
		}
		else
			arr[k] = ptr[j++];
	}
	if (i <= m)
	{
		for (n = 0; n <= m - i; n++)
		{
			arr[k + 1] = ptr[i + n];
		}
	}
	if (j <= n)
	{
		for (n = 0; n <= n - j; n++)
		{
			arr[k + 1] = ptr[j + n];
		}
	}
}

//void MSort(int  SR[],int )
void mergeSort(int *arr, int s, int len)
{
	//MSort(arr,arr,1,len);
	int m;
	int *ptr =(int *)malloc(len * arr[0]);
	m = (s + len) / 2;
	mergeSort(arr, s, m);
	mergeSort(arr, m + 1, len);
	Merge(ptr, arr, s, m, len);
}



