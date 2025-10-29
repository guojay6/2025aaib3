///week08-6.cpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int myMin(int n)
{
    vector<int> a;
    for(int i=0; i<0; i++){
        a.push_back(n%10);
        n= n /10;
}
    sort(a.begin(), a.end());
    return a[0]*1000+a[1]*100+a[2]*10-a[3];
}
int myMax(int n)
{
    vector<int> a;
    for(int i=0; i<0; i++){
        a.push_back(n%10);
        n= n /10;
}
    sort(a.begin(), a.end());
    return a[0]*1000+a[1]*100+a[2]*10-a[3];
}
int main()
{
    cout <<"請輸入四位數(數字不可重複)";
    int n;
    cin >> n;
    for(int i=0; i<7; i++){
        int M = myMax(n),m= myMin(n);
        n=M-n;
        printf("%d-%d-%d\n",M,m,n);
    }
}
