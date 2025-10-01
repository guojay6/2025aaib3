//week04-4.cpp
//只有增加or減少的陣列不能又加又減
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down=0;//如果增加up變成1如果減少down 變成1
        for(int i=1; i<nums.size(); i++){//陣列從1開始
            if(nums[i-1] < nums[i] ) up = 1;//左小右大增加
            if(nums[i-1] > nums[i] ) down = 1;//左大右小減少
        }
        if(up==1 && down==1) return false;
        return true;
    }
};
