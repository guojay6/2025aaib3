//week03-4b.cpp
//leetcode 283
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;//�h�F���[k++]=nums[i]�A�o�ؼg�k
        for(int i=0; i<nums.size();i++){//�������@��
            if(nums[i] !=0) nums[k++] = (nums[i]);
        }
        for(int i=k; i<nums.size();i++){//�A�`�@��
            nums[i] =0;//����A��0����
        }
    }
};
