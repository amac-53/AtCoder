#include<bits/stdc++.h>

using namespace std;

int main(){

    // 1, 2 ,..., N
    int N, Q; cin >> N >> Q;
    vector<long long> A(N+1), diff(N);

    long long res = 0;
    for(int i=1; i<=N; i++){
        cin >> A[i];
        if(i > 1){
            diff[i-1] = A[i] - A[i-1];
            res += abs(diff[i-1]);
        }
    }

    for(int i=0; i<Q; i++){
        int L, R, V; cin >> L >> R >> V;

        if(L == 1 && R == N){ // 右端かつ左端
            // なにもしない
        }else if(L == 1){ // 左端
            res -= abs(diff[R]);
            diff[R] -= V;
            res += abs(diff[R]);
        }else if(R == N){ // 右端
            res -= abs(diff[L-1]);
            diff[L-1] += V;
            res += abs(diff[L-1]);
        }else{ // どっちでもないなら
            res -= (abs(diff[L-1]) + abs(diff[R]));
            diff[L-1] += V;
            diff[R] -= V;
            res += (abs(diff[L-1]) + abs(diff[R]));
        }
        cout << res << endl;
    }

    return 0;
}