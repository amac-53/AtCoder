#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> w(N), v(N);
    for(int i=0; i<N; i++) cin >> w[i];
    for(int i=0; i<N; i++) cin >> v[i];

    int res = 0;
    for(int i=0; i<(1<<N); i++){
        int w_sum = 0, v_sum = 0;
        for(int j=0; j<N; j++){
            if(i & (1 << j)){
                w_sum += w[j];
                v_sum += v[j];
            }
        }
        if(w_sum <= M) res = max(v_sum, res);
    }
    cout << res << endl;
    return 0;
}