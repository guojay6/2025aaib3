///week03-1.cpp
///c++陣列 vector<int>
#include <iostream>
#include <vector>
using namespace std;///不要忘了使用命名空間std
int main()
{
    cout <<"請輸入四個數字: ";
    vector<int> a;///伸縮自如的陣列
    int now;
    for(int i=0; i<4; i++){
        cin >>now;///現在輸入
        a.push_back(now);
    }
    for(int  i=0; i<a.size(); i++){
        cout <<a[i] << ' ';
    }
    cout << "現在程式碼裡，又推入99，98兩個數字，結果呢?\n";
    a.push_back(now);///推到a的最後面
    a.push_back(now);///推到a的最後面
    for(int i=0; i<a.size(); i++){
        cout <<a[i] << ' ';///數字後面有空格
    }
}
