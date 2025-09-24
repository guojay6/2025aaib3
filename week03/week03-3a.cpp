//week03-3a.cpp
//leetcode 厩策璸礶1822
class Solution {
public:
    int arraySign(vector<int>& nums) {
      int ans =1;//1ヴ计碞礛跑Θヴ计
      for(int i=0;i<nums.size();i++){
        ans*=nums[i];//р皚秈
      }  //计禫ㄓ禫
      if(ans>0) return 1;
      if(ans<0) return -1;
      return 0;
    }
};
