//week03-4b.cpp
//leetcode 283
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;//搬東西用[k++]=nums[i]，這種寫法
        for(int i=0; i<nums.size();i++){//全部巡一次
            if(nums[i] !=0) nums[k++] = (nums[i]);
        }
        for(int i=k; i<nums.size();i++){//再循一次
            nums[i] =0;//之後再塞0的值
        }
    }
};
