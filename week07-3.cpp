///week07-3.cpp
///682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string op : operations){///part01 c++�i���j��
            //cout  << "�{�bŪ��:" << op << "\n";///part02�ݥL�O�ֵ��@�U�R��
            ///part03�@��if �P�_�n������
            if (op[0]=='C'){///�M���̫�@��
                a.pop_back();
            }else if (op[0]=='D'){///�̫�@����2���b�[��̫᭱
                a.push_back(a.back()*2);
            }else if (op[0]=='+'){///�٤����D���@�U�A��
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back( temp );
                a.push_back(temp + temp2);
            }else{///�Ʀr���r��n�[��̫᭱
                a.push_back( stoi(op) );///part04:.push _back()

            }
        }
        int ans=0;
        for (int now : a){///part05:c++�i���j��n�ݰ}�C�̪���
                ans += now;///part02�n�o�O�ֵ��@�U�n�R��

        }
        return ans;
    }
};
