#include<bits/stdc++.h>

using namespace std;

struct UnionFind {
    vector<int> par, rank;

    // コンストラクタ
    // 全ての根を親に，高さ0に初期化
    UnionFind(int n) {
        par.resize(n, -1);
        rank.resize(n, 0);
    }

    // 経路圧縮による root
    int root(int x){
        if(par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }

    // union by rank
    bool unite(int x, int y){
        int rx = root(x), ry = root(y);
        
        // 同じ木のときは何もしない
        if(rx == ry) return false;
        // 異なる木のとき
        // ryの方が低くなるようにして，rxを根に設定
        if(rank[rx] < rank[ry]) swap(rx, ry);
        par[ry] = rx;
        if(rank[rx] == rank[ry]) rank[rx]++;
        return true;
    }

    // find
    bool issame(int x, int y){
        return root(x) == root(y);
    }
};


int main(){

    int H, W; cin >> H >> W;
    vector<vector<bool>> isred(H, vector<bool>(W, false)); 
    UnionFind UF(H*W);

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, -1, 0, 1};

    int Q; cin >> Q;
    for(int i=0; i<Q; i++){
        int q; cin >> q;
        if(q == 1){
            int x, y; cin >> x, y;
            isred[x][y] = true;
            for(int i=0; i<4; i++){
                int cx = x + dx[i];
                int cy = y + dy[i];

                if(!isred[cx][cy]) continue;
                int hash1 = (x-1)*W + (y-1);
                int hash2 = (cx-1)*W + (cy-1);
                if(!UF.issame(hash1, hash2)){
                    UF.unite(hash1, hash2);
                }
            }
        }
        if(q == 2){
            string ans = "No";
            int lx, ly;  cin >> lx >> ly;
            int rx, ry;  cin >> rx >> ry;
            if(isred[lx][ly] && isred[rx][ry]){
                int hash1 = (lx-1)*W + ly;
                int hash2 = (rx-1)*W + ry;
                if(UF.issame(hash1, hash2)) ans = "Yes";
            }
            cout << ans << endl;
        }
    }
    return 0;
}