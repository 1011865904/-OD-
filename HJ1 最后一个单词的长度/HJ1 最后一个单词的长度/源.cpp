#include<iostream>
#include<string>
using namespace std;

//题目在一行上输入若干字符串，每一个字符串代表一个单词，输入最后一个单词的长度



//解法1
/*
getline(cin,str)代表输入一整行的字符串全部输入给str,包括空格，遇到[enter]停止
len代表字符串长度，遇到空格清0，只到最后一个

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

//解法2
/*
不断地向str中输入字符，因为cin遇到空格会停止输入，所以str中每次输入的都是
最后一个输入的字符串，只要当输入[enter]时停止，str中存的就是最后一个字符串
cin.get() == '\n',代表输入[enter]就会执行if中的语句
break；就会退出
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