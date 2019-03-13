/*
题目描述
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。例如：
输入描述:
输入N个字符

输出描述:
输出该字符串反转后的字符串

示例1
输入  abcd
输出  dcba
*/
//Zachary   easy
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int nLen = str.size();
    for(int i=nLen-1;i>=0;i--){
        cout<<str[i];
    }
    
    return 0;
}