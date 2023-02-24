#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    vector<vector<char>> field(H, vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++) cin >> field[i][j];
    }

    vector<int> dx = {1, 0, -1, 0}, dy = {0, -1, 0, 1};

    for(int i=0; i<(1 << H*W); i++){
        // 深いコピー
        vector<vector<char>> field_copy = field; 
        for(int j=0; j<H*W; j++){
            if(i & (1 << j)){
                field_copy[int(j / W)][int(j % W)] = (field_copy[int(j / W)][int(j % W)] == '.' ? '#' : '.');
                for(int k=0; k<4; k++){
                    // 移動可能なら塗り替え
                    int ny = int(j / W) + dy[k], nx = int(j % W) + dx[k];
                    if(0 <= ny && ny < H && 0 <= nx && nx < W){
                        field_copy[ny][nx] = (field_copy[ny][nx] == '.' ? '#': '.');
                    } 
                }
            }
        }

        int cnt = 0;
        for(int j=0; j<H; j++){
            for(int k=0; k<W; k++){
                if(field_copy[j][k] == '.') cnt++;
            }
        }
        if(cnt == H*W){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
