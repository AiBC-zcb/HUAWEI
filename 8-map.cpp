/*题目描述
数据表记录包含表索引和数值，请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。

输入描述:
先输入键值对的个数
然后输入成对的index和value值，以空格隔开

输出描述:
输出合并后的键值对（多行）

示例1
输入
4
0 1
0 2
1 2
3 4

输出
0 3
1 2
3 4  
*/
//writer:Zachary   随便一试竟然通过了，只能说牛客网上的测试用例太简单了
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m[1000] = {0};
    int k,v;
    for(int i=0;i<n;i++){
        cin >> k;
        cin >> v;
        m[k] += v;
    }
    for(int i=0;i<1000;i++){
        if(m[i]!=0)
            cout<<i<<" "<<m[i]<<endl;
    }
    
    return 0;
}
//上面的代码有两处明显的bug，更普遍的做法可以用map数据结构
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k,v;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin >> k >> v;
        m[k] += v;
    }
    for(auto iter= m.begin(); iter != m.end(); ++iter){
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    
    return 0;
}




