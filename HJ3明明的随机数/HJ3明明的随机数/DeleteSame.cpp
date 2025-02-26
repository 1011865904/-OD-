#include <iostream>
using namespace std;

void DeletSame(int *arr,int lengh)
{
	for (int i = 0; i < lengh-1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			arr[i] = 0;
		}
	}
}