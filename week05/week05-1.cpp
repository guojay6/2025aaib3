//week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//把字串string當iostream的cin來用
        string word;//字串
        //ss >> word;
        //ss >> word;
        while( ss >> word) {//一直讀，讀到不能讀為止
            //裡面甚麼是都沒做
        }
        cout << word;//先做一個實驗看讀到誰

        return word.length();//最後把長度送出去
    }
};
