#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    sort(A.begin(), A.end());
    int ans = 2e9 + 1;
    for(int i=0; i<N-K+1; i++){
        int diff = A[i+K-1] - A[i];
        ans = min(ans, diff);
    }
    cout << ans << endl;
    return 0;
}