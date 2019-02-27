/*******************************************************************
题目描述
•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组； 
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。 
输入描述:
连续输入字符串(输入2次,每个字符串长度小于100)

输出描述:
输出到长度为8的新字符串数组

示例1
输入
abc
123456789
输出
abc00000
12345678
90000000
*********************************************************************/
//writer:Zachary            普通解法，可以使用string的一些函数
#include <iostream>
#include <string>
using namespace std;

int OutPut(string s){
    if(s=="")
        return 0;
    int n = 8 - s.size()%8;
    for(int i=0;n!=8&&i<n;i++){
        s = s+"0";
    }
    int p=0;
    while(s[p]!='\0'){
        cout << s[p];
        if(p%8==7)
            cout<<endl;
        p++;
    }
   
    return 0;
}

int main()
{
    string str1;
    string str2;
    cin >> str1 >>str2;
    OutPut(str1);
    OutPut(str2);
    return 0;
}
/*********************************************************************/
//writer：牛油           这个递归函数用的不错，积累了string.append(n,'char'),填充n个字符‘char’
#include <iostream>
#include <string>
using namespace std;
void fuck(string str) {
    if (str == "")
        return;
    if (str.size() <= 8) {
        str.append(8 - str.size(), '0');
        cout << str << endl;
        return;
    }
    cout << str.substr(0, 8) << endl;
    fuck(str.substr(8, str.size()));
}
int main() {
    string str1, str2;
    cin >> str1 >> str2;
    fuck(str1);
    fuck(str2);
    return 0;
}



