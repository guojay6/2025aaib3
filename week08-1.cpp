///week08-1.cpp
///3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N=0;///ノブ猭тn琌秈碭计
        while (n>0){
            n= n/2;///奔糷ブ
            N++;///1计
        }
        cout <<"瞷祇瞷n琌碭计㎡?" << N << "计\n";
        int ans= 0;
        for (int i=0; i<N; i++){///ノ癹伴舱场常琌1秈N计;
            ans = ans * 2 + 1;
        }
        return ans;
    }
};
