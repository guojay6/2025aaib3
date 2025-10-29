///week08-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d=0;///0:北1:東2:南3:西
        int x = 0, y = 0;///一開始在(0,0)
        instructions = instructions + instructions +instructions + instructions;///重複走四次
        for(char c : instructions){
            if(c=='G'){///往前走
                if(d==0) y++;///往北走一格
                if(d==1) x++;///往東走一格
                if(d==2) y--;///往南走一格
                if(d==3) x--;///往西走一格
            }else if (c=='R'){///往右轉順90度
                d= (d+1) %4;
            }else if (c=='L'){//往左轉逆90度
                d= (d+3) %4;
            }
        }
        return x==0 && y==0;
    }
};
