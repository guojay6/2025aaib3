///week06-1
class Solution {
public:
    bool isAnagram(string s, string t) {
        ///���ݦr�ꪺ���׬O�_�ۦP
        if(s.length() !=t.length() ) return false;///���P�N��������

        ///����r��s���r���ֿn�@�U
        int R[26]={};///�n���@��Recycle�^����Ӥ����ڭ̪��r��
        for(int i=0; i<s.length();i++){
            char c =s[i] -'a';///���Ӥp�g�r�����n�ܦ�0-25�ҥH�n��0
            R[c]++;
        }
        ///�A����ֿn���r����t�Ψ쨺�ǹ�����n�Χ�
        for(int i=0; i<t.length(); i++){
            char c= t[i]-'a';
            R[c]--;///�α��o
            if(R[c]<0) return false;///�����δN����

        }
        return true;///�S�����ѴN�O���\

    }
};
