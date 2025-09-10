///leecode學習計畫 大海撈針 在haystack找到needle
class Solution {
public:
    int strStr(string haystack, string needle) {
        //要用迴圈，把所有可能的位置，都找一次
        //ex,sadbutasad 很難過 要找 sad
        int H = haystack.length(), N = needle.length();
        for(int i=0; i<= H - N;i++){ //i試過所有位置
           if( haystack.substr(i, N) == needle) return i;
            //從i開始，剪出N 個字母 竟然相同找到答案
        }
        return -1;//沒有找到答案，要回傳-1代表失敗
    }
};
