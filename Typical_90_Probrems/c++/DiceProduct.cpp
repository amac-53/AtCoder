#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main(){
    int N; cin >> N;

    long long ans = 1;
    for(int i=0; i<N; i++){
        int tmp = 0;
        for(int j=0; j<6; j++){
            long long a; cin >> a;
            tmp += a;
        }
        ans = (ans * tmp) % MOD;
    }

    cout << ans << endl;

    return 0;
}