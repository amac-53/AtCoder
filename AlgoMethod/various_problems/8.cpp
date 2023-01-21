#include<bits/stdc++.h>
using namespace std;

// 再帰の実装
int main(){
    int N, M; cin >> N >> M;

    int now = N, pls_one = 0;
    while(now >= M){
        now += 1 - M;
        pls_one++;
    }
    cout << N + pls_one << endl;
    return 0;
}