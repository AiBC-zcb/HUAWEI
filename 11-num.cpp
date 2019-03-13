/*
题目描述
描述：
输入一个整数，将这个整数以字符串的形式逆序输出
程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001

输入描述:
输入一个int整数
输出描述:
将这个整数以字符串的形式逆序输出

示例1
输入   1516000
输出   0006151
*/
//By Zachary
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==0){
        cout<<n;
        return 0;
    }
    while(n){
        cout<<n%10;
        n/=10;
    }
    
    return 0;
}
