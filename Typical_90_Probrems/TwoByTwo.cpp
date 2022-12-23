#include<bits/stdc++.h>

using namespace std;

int main(){
    int H, W; cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W)), B(H, vector<int>(W));
    
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> A[i][j];
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> B[i][j];
        }
    }

    // 動かす箇所
    int dx[4] = {0, 1, 1, 0}, dy[4] = {0, 0, 1, 1};
    long long ans = 0;
    for(int i=0; i<H-1; i++){
        for(int j=0; j<W-1; j++){
            int diff = B[i][j] - A[i][j];
            // 差があるなら変更
            if(diff != 0){
                for(int k=0; k<4; k++){
                    B[i+dx[k]][j+dy[k]] -= diff;
                }
            }
            ans += abs(diff);
        }
    }

    // 一致確認
    bool flag = true;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            int diff = B[i][j] - A[i][j];
            if(diff != 0) flag = false;
        }
    }

    if(flag){
        cout << "Yes" << endl;
        cout << ans << endl;
    }else{
        cout << "No" << endl;   
    }
    return 0;
}