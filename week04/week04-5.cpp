//week04-5.cpp

//從右往左看到過來迴圈
//1,9,9
//    0因為有進位所以左邊加1
//  0  因為有進位所以左邊加1
//2    沒有進位直接找到答案
//1,2,3
//    4沒有進位直接找到答案
//9,9,9
//1,0,0,0如果一直進位沒找到答案還要前面補1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();//先知道陣列的長度,以便倒過來的迴圈
        for(int i=N-1; i>=0; i--) {
            if( digits[i] ==9) digits[i] =0;//進位變成0(還沒找到答案)
            else{//沒有進位就是找到答案
                digits[i]++;//就+1後沒有進位
                return digits;//找到答案了送出去
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
