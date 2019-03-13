/*
题目描述
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)。不在范围内的不作统计。

输入描述:
输入N个字符，字符在ACSII码范围内。

输出描述:
输出范围在(0~127)字符的个数。

示例1
输入  abc
输出  3
*/
//Zachary
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int nLen = str.size();
    int a[128] = {0};
    int n=0;
    for(int i=0;i<nLen;i++){
        if(0<=str[i]&&str[i]<128){
            if(a[str[i]]==0){
                n++;
                a[str[i]]++;
            }
        }
        
    }
    cout << n;
    return 0;
}
//Writer: 牛油  set去重排序有妙用

#include<iostream>
#include<set>
using namespace std;
int main()
{
    char c;
    set<char> s;
    while(cin>>c){
        if(c>=0 && c<=127){
            s.insert(c);
        }
    }
    cout << s.size() <<endl;
}