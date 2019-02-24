/*查找算法*/
bool SequenceSearch(int *arr, int value, int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		if (value == arr[i])
		{
			return true;
		}
	}
	return false;
}

bool BinarySearch(int *arr, int value, int low, int high)/*有序数组*/
{
	int mid = (low + high) / 2;
	if (value == arr[mid])
	{
		return true;
	}
	if(value < arr[mid])
	{
		return BinarySearch(arr, value, low, mid - 1);
	}
	if (value > arr[mid])
	{
		return BinarySearch(arr, value, mid + 1, high);
	}
	else
		return false;
}

bool InsertionSearch(int *arr, int value, int low, int high)
{
	int mid = low + (value - arr[low])/(arr[high] - arr[low]) * (high - low);
	if (value == arr[mid])
	{
		return true;
	}
	if(value < arr[mid])
	{
		return InsertionSearch(arr, value, low, mid - 1);
	}
	if (value > arr[mid])
	{
		return InsertionSearch(arr, value, mid + 1, high);
	}
	else
		return false;
}

void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int *arr, int length)
{
	int i, j, temp;
	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j < length - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void SelectionSort(int *arr, int length)
{
	int i, j, min;
	for (i = 0; i < length - 1; i++)
	{
		min = i;
		for (j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		Swap(arr[i], arr[min]);
	}
}

void InsertSort(int *arr, int length)
{
	int i, j, temp;
	for (i = 1; i < length; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i];
			for (j = i - 1; j >= 0 && arr[j] > temp; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

void QuickSort(int *arr, int left, int right)
{
	if (left > right)
	{
		return;
	}
	int i, j, flag;
	i = left;
	j = right;
	flag = arr[left];
	while(i < j)
	{
		while(i < j && arr[j] >= flag)
			j--;
		if (i < j)
		{
			arr[i++] = arr[j];
		}
		while(i <j && arr[i] <= flag)
			i++;
		if (i < j)
		{
			arr[j --] = arr[i];
		}
	}
	arr[i] = flag;
	QuickSort(arr, left, i - 1);
	QuickSort(arr, i + 1, right);
}

void HeapConstruct(int *arr, int root, int length)
{
	int i, temp; 
	temp = arr[root];

	for (i = root * 2 + 1; i < length; i = i * 2 + 1)
	{
		if (i < length - 1 && arr[i] < arr[i+1])
		{
			i++;
		}
		if (arr[i] < arr[root])
		{
			break;
		}
		arr[root] = arr[i];
		root = i;
	}
	arr[root] = temp;
}

void HeapSort(int *arr, int length)
{
	int i;
	for (i = length - 1; i >= 0; i--)
	{
		HeapConstruct(arr, i, length);
	}
	for (i = length - 1; i > 0; i--)
	{
		Swap(arr[0], arr[i]);
		HeapConstruct(arr, 0, i);
	}	
}

void ShellSort(int *arr, int length)
{
	int i , j, temp;
	int step = length;

	do 
	{
		step = step / 3 + 1;
		for (i = step; i < length; i++)
		{
			if (arr[i] < arr[i - step])
			{
				temp = arr[i];
				for (j = i - step; j >= 0 && arr[j] > arr[i]; j -= step)
				{
					arr[j + step] = arr[j];
				}
				arr[j + step] = temp;
			}
		}
	} while (step > 1);
}

void Merge(int *arr, int start, int end, int *result)
{
	int left_length = (end - start + 1) / 2 + 1;
	int left_index = start;
	int right_index = start + left_length;
	int result_index = start;
	while (left_index <= start +left_length && right_index < end + 1)
	{
		if (arr[left_index] <= arr[right_index])
		{
			result[left_index++] = arr[left_index++];
		}
		else
			result[result_index++] = arr[right_index++];
	}
	while(left_index < start + left_length)
		result[result_index++] = arr[left_index++];
	while(right_index < end + 1)
		result[result_index++] = arr[right_index++];
}

void MergeSort(int *arr, int start, int end, int *result)
{
	if (1 == end - start)
	{
		if (arr[start] > arr[end])
		{
			int temp = arr[end];
			arr[end] = arr[start];
			arr[start] = temp;
		}
		return;
	}
	else if (0 == end - start)
	{
		return;
	}
	else
	{
		MergeSort(arr, start, (end - start + 1) / 2, result);
		MergeSort(arr,(end - start + 1) / 2 + start + 1, end, result);
		Merge(arr, start, end, result);
		for (int i = start; i <= end; i++)
		{
			arr[i] = result[i];
		}
	}
}

void bubble(int *arr, int length)
{
	int i, j;
	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j < length - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void insertSort(int *arr, int length)
{
	int i, j,temp;
	for (i = 1; i < length; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i];
			for (j = i - 1; j >= 0 && arr[j - 1] > temp; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

void selectSort(int *arr, int length)
{
	int i, j, temp;
	int min = i;
	for (i= 0; i < length - 1; i++)
	{
		temp = arr[i];
		for (j = 1; j < length; j ++)
		{
			if (arr[j] < temp)
			{
				min = j;
			}
		}
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void quickSort(int *arr, int left, int right)
{
	if (left > right)
	{
		return;
	}
	int i, j, temp;
	i = left;
	j = right;
	temp = arr[left];
	while(i < j)
	{
		while(i < j && arr[j] >= temp) j--;
		if (i < j)
		{
			arr[i++] = arr[j];
		}
		while(i < j && arr[i] <= temp) i++;
		if (i < j)
		{
			arr[j--] = arr[i] ;
		}
	}
	arr[i] = temp;
	quickSort(arr, i, j - 1);
	quickSort(arr, j + 1, right);
}