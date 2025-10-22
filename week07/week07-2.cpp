///week07-2.cpp
///657. Robot Return to Origin模擬機器人走路

class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0;
         ///for(int i=0; i<moves.length(); i++)//傳統的for迴圈
           /// char c = moves[i] ;
           for(char c: moves ){///c++進階迴圈
                if (c=='U' ){///往上
                    y++;
                }else if (c=='D'){///往下
                    y--;
                }else if (c=='L'){///往左
                    x--;
                }else if (c=='R'){///往右
                    x++;
                }
           }    ///離開迴圈後
           if(x==0 && y==0) return true;
           else return false;
    }
};
