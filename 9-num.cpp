/*
题目描述
输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

输入描述:
输入一个int型整数

输出描述:
按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

示例1
输入  9876673
输出  37689
*/
//writer: Zachary   这个做法相当不错了
#include <iostream>
using namespace std;

int main()
{
    int num,n,out=0;
    cin >> num;
    int a[10] = {0};
    while(num){
        n = num%10;
        if(a[n]==0){
            out = out*10+n;
            a[n]++;
        }
        num /=10;
    }
    cout << out;
    return 0;
}