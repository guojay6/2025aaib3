///week09-1.cpp
///1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M= accounts.size(), N = accounts[0].size();
        ///左手I右手J
        int ans=0;
        for(int i=0; i<M; i++){
            int now = 0;
            for(int j=0; j<N; j++){
                now += accounts[i][j];
            }
            ans = max(ans, now);///找最有錢的人，最大值
        }
        return ans;
    }
};
