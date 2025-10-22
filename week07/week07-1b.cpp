#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >>n;

    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
            if(j>1) cout <<" ";
            int d = max(abs(i-n), abs(j-n));
            cout << d+1;
        }
        ///cout <<"現在是第一樓,i:" <<i;///樓成鷹架
        cout << endl;///跳行

    }
}
