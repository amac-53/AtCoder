#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X; cin >> N >> X;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    int idx = 0, res = 0;
    while(X != 0){
        if(X & 1) res += A[idx];
        X >>= 1;
        idx++;
    }
    cout << res << endl;
    return 0;
}