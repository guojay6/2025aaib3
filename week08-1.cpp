///week08-1.cpp
///3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N=0;///���έ�֪k�A���n�O�G�i��X���
        while (n>0){
            n= n/2;///�鱼�@�h��
            N++;///�h�F1�����
        }
        cout <<"�{�b�o�{n�O�X��ƩO?" << N << "���\n";
        int ans= 0;
        for (int i=0; i<N; i++){///�A�ΰj��եX�������O1���G�i�쪺N���;
            ans = ans * 2 + 1;
        }
        return ans;
    }
};
