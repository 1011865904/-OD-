#include <iostream>
#include"Quicksort.h"
using namespace std;

//��Ŀ����
/*
* ���룺
    ��һ���������ָ�����n
    �����������������֣�n����
���룺
    �����������������
    ��һ��������С�����֣��ڶ�����Σ��Դ�����
    ɾ���ظ�������
*/
//˼·
/*
����n���յ�һ������
�ڶ�������n����С������
ѭ��n�ν�������
��������п�������
����ǰ����ͬ�����ݽ��л�0���������ʱ�����Ϊ0�����ݼ���
ѭ��n���������
*/
//ʾ�����
/*
���룺
3
2
2
1
*/
/*
�����
1
2
*/

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Quicksort(arr,0,n-1);
    DeletSame(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}