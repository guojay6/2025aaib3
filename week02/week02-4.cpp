//week02-4.cpp
//389
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};//可以用桶子來裝字母，大括號代表一開始空的
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            A[c]++;
        }
        for(int i=0; i<t.length(); i++){
            char c =t[i];//取出字母
            A[c]--;
            if(A[c]<0) return c;
        }
        return 0;//不會用到這一行啦
    }
};
