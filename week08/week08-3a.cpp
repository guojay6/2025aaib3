///week08-3a.cpp
///1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myPrint(int a[3][3]]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3 j++){
                cout << a[i][j] << " ";
            }
            cout << "\n";

        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};///���j�A���|��0
        int now = 1;///1:���aA�Ĥ@�Ӫ��a 2:���aB �ĤG�Ӫ��a
        for(vector<int> move : moves){
            int i= move[0], move[1];
            a[i][j]=now;//a[i][j] =1;///���aA�Ĥ@�Ӫ��a
            myPrint(a);
            if(now==1) now = 2;
            else now = 1;
        }

        return "A";
    }
};
