///leecode�ǲ߭p�e �j�����w �bhaystack���needle
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�n�ΰj��A��Ҧ��i�઺��m�A����@��
        //ex,sadbutasad �����L �n�� sad
        int H = haystack.length(), N = needle.length();
        for(int i=0; i<= H - N;i++){ //i�չL�Ҧ���m
           if( haystack.substr(i, N) == needle) return i;
            //�qi�}�l�A�ťXN �Ӧr�� ���M�ۦP��쵪��
        }
        return -1;//�S����쵪�סA�n�^��-1�N����
    }
};
