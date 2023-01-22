#include<bits/stdc++.h>

using namespace std;

int main(){
    int H, W; cin >> H >> W;
    vector<vector<int>> P(H, vector<int>(W));
    for(int i=0; i<H; i++) for(int j=0; j<W; j++) cin >> P[i][j];

    int res = 0;
    for(int i=1; i<(1 << H); i++){
        // 行を選択
        vector<int> selected_row;
        for(int j=0; j<8; j++){
            if((i >> j) & 1){
                selected_row.push_back(j);
            } 
        }
        
        // 同じ数字だけで構成された列を選択
        map<int, int> cnt;
        for(int k=0; k<W; k++){
            bool flag = true;
            for(int j=0; j<(int)selected_row.size(); j++){
                if(j > 0 && P[selected_row[j]][k] != P[selected_row[j-1]][k]) flag = false;
            }
            if(flag){
                cnt[P[selected_row[0]][k]]++;
                int tmp = cnt[P[selected_row[0]][k]] * (int)selected_row.size();
                res = max(res, tmp);
            }
        }
    }

    cout << res << endl;
    return 0;
}