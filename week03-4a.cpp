//week03-4a.cpp
//leetcode 283
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;//�������뵪�סA�b��^�hnums
        for(int i=0; i<nums.size();i++){//�������@��
            if(nums[i] !=0) ans.push_back(nums[i]);
        }//�����O0���ư����ƥ��A��쵪�ת��᭱
        for(int i=0; i<nums.size();i++){//�A�`�@��
            if(i<ans.size()) nums[i] = ans[i];
            else nums[i] = 0;//����A��0����
        }
    }
};
