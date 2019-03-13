/*
题目描述
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符

输入描述:
将一个英文语句以单词为单位逆序排放。

输出描述:
得到逆序的句子

示例1
输入   I am a boy
输出   boy a am I
*/
//Zachary 不错的解法
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string str;
    stack<string> sk;
    while(cin>>str){
        sk.push(str);
    }
    while(!sk.empty()){
        cout << sk.top()<<" ";
        sk.pop();
    }
    return 0;
}