///week03-1.cpp
///c++�}�C vector<int>
#include <iostream>
#include <vector>
using namespace std;///���n�ѤF�ϥΩR�W�Ŷ�std
int main()
{
    cout <<"�п�J�|�ӼƦr: ";
    vector<int> a;///���Y�ۦp���}�C
    int now;
    for(int i=0; i<4; i++){
        cin >>now;///�{�b��J
        a.push_back(now);
    }
    for(int  i=0; i<a.size(); i++){
        cout <<a[i] << ' ';
    }
    cout << "�{�b�{���X�̡A�S���J99�A98��ӼƦr�A���G�O?\n";
    a.push_back(now);///����a���̫᭱
    a.push_back(now);///����a���̫᭱
    for(int i=0; i<a.size(); i++){
        cout <<a[i] << ' ';///�Ʀr�᭱���Ů�
    }
}
