//week03-3a.cpp
//leetcode �ǲ߭p�e1822
class Solution {
public:
    int arraySign(vector<int>& nums) {
      int ans =1;//1���W����ơA�N��M�ܦ������
      for(int i=0;i<nums.size();i++){
        ans*=nums[i];//��}�C���i�h
      }  //�Ʀr�V�ӶV�j
      if(ans>0) return 1;
      if(ans<0) return -1;
      return 0;
    }
};
