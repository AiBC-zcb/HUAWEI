/************************************************************************************
题目描述
写出一个程序，接受一个十六进制的数值字符串，输出该数值的十进制字符串。（多组同时输入 ）

输入描述:
输入一个十六进制的数值字符串。

输出描述:
输出该数值的十进制字符串。

示例1
输入  0xA
输出  10
***************************************************************************************/
//writer: Zachary
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string str;
    int  i = 0, len, sum;

    while (cin>>str)
    {
        len = str.size();
        sum = 0;

        for (i = len - 1; i >= 0; --i)
        {
            if (str[i] >= '0' && str[i] <= '9') //  数字字符的转换
            {
                sum += (str[i] - '0') * pow(16,len - 1 - i);
            }
            else if (str[i] >= 'A' && str[i] <= 'F')
            {
                sum += (str[i] - 55) * pow(16, len - 1 - i);
            }
        }
        cout << sum << endl;
    }
}
//**********************************************************************************
//writer: 牛油

#include <iostream>
using namespace std;

int main()
{
    int a;
    while(cin>>hex>>a){
    cout<<a<<endl;
    }
}



