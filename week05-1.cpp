//week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//��r��string��iostream��cin�ӥ�
        string word;//�r��
        //ss >> word;
        //ss >> word;
        while( ss >> word) {//�@��Ū�AŪ�줣��Ū����
            //�̭��ƻ�O���S��
        }
        cout << word;//�����@�ӹ����Ū���

        return word.length();//�̫����װe�X�h
    }
};
