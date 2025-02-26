#include <iostream>
using namespace std;

void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

int part(int* arr, int left, int right)
{
	int i = left, j = right, pivot = arr[left];
	while (i < j)
	{
		while (i<j && arr[j]>pivot)
		{
			j--;
		}
		if (i < j)
		{
			swap(arr[i], arr[j]);
			i++;
		}
		while (i < j && arr[i] <= pivot)
		{
			i++;
		}
		if (i < j)
		{
			swap(arr[i], arr[j]);
			j--;
		}
	}
	return i;
}

void Quicksort(int* arr, int left, int right)
{
	int mid;
	if (left < right)
	{
		mid = part(arr, left, right);
		Quicksort(arr, left, mid - 1);
		Quicksort(arr, mid+1, right);
	}
}