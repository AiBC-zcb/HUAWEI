/************************************************
题目描述
计算字符串最后一个单词的长度，单词以空格隔开。 
输入描述:
一行字符串，非空，长度小于5000。

输出描述:
整数N，最后一个单词的长度。

示例1
输入  hello world
输出  5
*************************************************/
//writer:Zachary
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);   //获取整行，直接cin只能读取到第一个空格前的单词
    int nLen = str.size();
    for(int i=nLen-1;i>=0;i--){
        if(str[i]==' '){
            cout << nLen-1-i;
            return 0;
        }
    }
    cout << nLen;    
    return 0;
}
/****************************************************/
//writer: 牛油
//直接通过输入流来检测空格
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    while(cin>>str);
    cout<<str.size()<<endl;
    return 0;
}
/*****************************************************/





