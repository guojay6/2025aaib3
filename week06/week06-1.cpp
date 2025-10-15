///week06-1
class Solution {
public:
    bool isAnagram(string s, string t) {
        ///先看字串的長度是否相同
        if(s.length() !=t.length() ) return false;///不同就直接失敗

        ///先把字串s的字母累積一下
        int R[26]={};///要有一個Recycle回收桶來分類我們的字母
        for(int i=0; i<s.length();i++){
            char c =s[i] -'a';///本來小寫字母但要變成0-25所以要減0
            R[c]++;
        }
        ///再把剛剛累積的字母看t用到那些劃掉剛好用完
        for(int i=0; i<t.length(); i++){
            char c= t[i]-'a';
            R[c]--;///用掉她
            if(R[c]<0) return false;///不夠用就失敗

        }
        return true;///沒有失敗就是成功

    }
};
