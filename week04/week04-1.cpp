///week04-1.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;///上週教過伸縮自如的陣列沒有初始化大小
    cout << "a的長度是" << a.size() << endl;
    a.push_back(99);
    cout <<"a的長度變" << a.size() << endl;

    vector<int> b(3);
    b.push_back(99);
    cout << "b的長度是" << b.size() << endl;
    for(int i=0; i<b.size(); i++) cout << b[i] << ' ' ;
    cout <<"經過 .push_back(99) 後 b變長了" << endl;

    vector<int> c(3, 88);
    for(int i=0; i<c.size(); i++) cout << c[i] << ' ';///88 88 88
    cout<< "初始化 (3,88)就是3個88 " << endl;

}
