///week10-2a.cpp(¥ý¼g¿ùªº)
///1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low; i<=high; i++){
            if(i%2==1) ans++;
        }
        return ans;
    }
};
