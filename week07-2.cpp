///week07-2.cpp
///657. Robot Return to Origin���������H����

class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0;
         ///for(int i=0; i<moves.length(); i++)//�ǲΪ�for�j��
           /// char c = moves[i] ;
           for(char c: moves ){///c++�i���j��
                if (c=='U' ){///���W
                    y++;
                }else if (c=='D'){///���U
                    y--;
                }else if (c=='L'){///����
                    x--;
                }else if (c=='R'){///���k
                    x++;
                }
           }    ///���}�j���
           if(x==0 && y==0) return true;
           else return false;
    }
};
