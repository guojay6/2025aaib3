///week08-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d=0;///0:�_1:�F2:�n3:��
        int x = 0, y = 0;///�@�}�l�b(0,0)
        instructions = instructions + instructions +instructions + instructions;///���ƨ��|��
        for(char c : instructions){
            if(c=='G'){///���e��
                if(d==0) y++;///���_���@��
                if(d==1) x++;///���F���@��
                if(d==2) y--;///���n���@��
                if(d==3) x--;///���訫�@��
            }else if (c=='R'){///���k�බ90��
                d= (d+1) %4;
            }else if (c=='L'){//������f90��
                d= (d+3) %4;
            }
        }
        return x==0 && y==0;
    }
};
