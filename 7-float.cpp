/*****************************************************************
题目描述
写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数
点后数值大于等于5,向上取整；小于5，则向下取整。

输入描述:
输入一个正浮点数值

输出描述:
输出该数值的近似整数值

示例1
输入  5.5
输出  6
*******************************************************************/
//writer: Zachary
#include <iostream>
using namespace std;
int main()
{
    float f;
    cin >> f;
    int n = (int)(f*10);
    if (n%10<5){
        cout << n/10;
        return 0;
    }
    cout << n/10+1;
    
    return 0;
}

//writer: 牛油
#include <iostream>
using namespace std;
int main()
{
float a;
cin>>a;
cout<<int(a+0.5);
return 0;
}