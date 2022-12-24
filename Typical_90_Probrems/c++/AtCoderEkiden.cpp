#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main(){

    int N; cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> A[i][j];
        }
    }

    // 仲の悪さ
    int M; cin >> M;
    vector<vector<bool>> Uwasa(N, vector<bool>(N, false));
    for(int i=0; i<M; i++){
        int x, y; cin >> x >> y;
        Uwasa[x-1][y-1] = true;
        Uwasa[y-1][x-1] = true;
    }

    vector<int> P(N, 0);
    for(int i=0; i<N; i++) P[i] = i;

    int ans = INF;
    do{
        // 相性検知用フラグ
        bool flag = false;
        int tmp = 0;
        for(int i=0; i<N; i++){
            tmp += A[i][P[i]];
            if(i < N-1 && Uwasa[P[i]][P[i+1]]) flag = true;
        }
        // 相性クリアすれば
        if(!flag) ans = min(ans, tmp);
        
    }while(next_permutation(P.begin(), P.end()));

    if(ans == INF) cout << "-1" << endl;
    else cout << ans << endl;

    return 0;
}