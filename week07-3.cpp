///week07-3.cpp
///682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string op : operations){///part01 c++進階迴圈
            //cout  << "現在讀到:" << op << "\n";///part02看他是誰等一下刪掉
            ///part03一堆if 判斷要怎麼模擬
            if (op[0]=='C'){///清掉最後一位
                a.pop_back();
            }else if (op[0]=='D'){///最後一位變2倍在加到最後面
                a.push_back(a.back()*2);
            }else if (op[0]=='+'){///還不知道等一下再看
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back( temp );
                a.push_back(temp + temp2);
            }else{///數字的字串要加到最後面
                a.push_back( stoi(op) );///part04:.push _back()

            }
        }
        int ans=0;
        for (int now : a){///part05:c++進階迴圈要看陣列裡的值
                ans += now;///part02要她是誰等一下要刪掉

        }
        return ans;
    }
};
