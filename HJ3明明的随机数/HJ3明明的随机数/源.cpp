#include <iostream>
#include"Quicksort.h"
using namespace std;

//题目描述
/*
* 输入：
    第一行输入数字个数：n
    接下来几行输入数字（n个）
输入：
    输入的数字排序后输出
    第一行输入最小的数字，第二行其次，以此类推
    删除重复的数字
*/
//思路
/*
变量n接收第一行数字
在堆区开辟n个大小的数组
循环n次接收数字
对数组进行快速排序
数组前后相同的数据进行化0，在输出的时候不输出为0的数据即可
循环n次输出数组
*/
//示例输出
/*
输入：
3
2
2
1
*/
/*
输出：
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