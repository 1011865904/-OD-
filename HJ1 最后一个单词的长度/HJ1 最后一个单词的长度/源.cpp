#include<iostream>
#include<string>
using namespace std;

//��Ŀ��һ�������������ַ�����ÿһ���ַ�������һ�����ʣ��������һ�����ʵĳ���



//�ⷨ1
/*
getline(cin,str)��������һ���е��ַ���ȫ�������str,�����ո�����[enter]ֹͣ
len�����ַ������ȣ������ո���0��ֻ�����һ��

*/
int main() {
    string str;
    getline(cin, str);
    int len = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            len = 0;
        }
        else {
            len++;
        }
    }
    cout << len << endl;
    return 0;
}

//�ⷨ2
/*
���ϵ���str�������ַ�����Ϊcin�����ո��ֹͣ���룬����str��ÿ������Ķ���
���һ��������ַ�����ֻҪ������[enter]ʱֹͣ��str�д�ľ������һ���ַ���
cin.get() == '\n',��������[enter]�ͻ�ִ��if�е����
break���ͻ��˳�
*/
//int main()
//{
//    string str;
//    while (cin >> str)
//    {
//        if (cin.get() == '\n')
//        {
//            break;
//        }
//    }
//    cout << str.size();
//    return 0;
//}