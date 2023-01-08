#include<bits/stdc++.h>

using namespace std;

int main(){
    int N; cin >> N;
    vector<vector<int>> field(1001, vector<int>(1001, 0));

    for(int i=0; i<N; i++){
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;

        field[ry][lx]--;  // 左下
        field[ry][rx]++;  // 右下
        field[ly][lx]++;  // 左上
        field[ly][rx]--;  // 右上
    }

    // シミュレーション
    // x方向   
    for(int i=0; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            field[i][j] += field[i][j-1];
        }
    }
    // y方向   
    for(int i=0; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            field[j][i] += field[j-1][i];
        }
    }
    // カウント
    vector<int> cnt(N+1, 0);
    for(int i=0; i<=1000; i++){
        for(int j=0; j<=1000; j++){
            cnt[field[i][j]]++;
        }
    }

    for(int k=1; k<=N; k++){
        cout << cnt[k] << endl;
    }
    return 0;
}