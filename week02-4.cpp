//week02-4.cpp
//389
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};//�i�H�α�l�Ӹ˦r���A�j�A���N��@�}�l�Ū�
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            A[c]++;
        }
        for(int i=0; i<t.length(); i++){
            char c =t[i];//���X�r��
            A[c]--;
            if(A[c]<0) return c;
        }
        return 0;//���|�Ψ�o�@���
    }
};
