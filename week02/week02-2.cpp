///week02-2.cpp c++
///�n��c++�r�� �ϹL��
#include <iostream>///IO��y�~��
#include <string>///�r��~��
using namespace std;///�ϥΩR�W�Ŷ�
int main()
{
    cout << "�п�J�Ʀr:";
    string a, ans;///c++���r��
    cin >> a;///Ū�J�r��
    ///�˹L�Ӫ��j��r�ꪺ����a.length()
    for(int i=a.length()-1; i>=0; i--){
        ans+=a[i];///��r���˹L�ӡA��J����
    }
    cout << a <<ans;
}
