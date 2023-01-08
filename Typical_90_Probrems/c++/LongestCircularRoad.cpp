#include<bits/stdc++.h>

using namespace std;

const int INF = 1e5 + 1;
vector<vector<int>> G(INF, vector<int>());
vector<int> dist(INF, 0);

void calc_dist(int node){
    for(auto v: G[node]){
        if(dist[v] == 0){
            dist[v] = dist[node] + 1;
            calc_dist(v);
        }
    }
}


int main(){

    int N; cin >> N;
    for(int i=0; i<N-1; i++){
        int a, b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 任意の頂点（ここでは1）からの距離計算
    calc_dist(1);

    // 最長距離にある頂点を取得
    int node1 = 0, max_dist = 0;
    for(int i=1; i<=N; i++){
        if(max_dist < dist[i]){
            max_dist = dist[i];
            node1 = i;
        }
    }
    
    // distの再初期化
    for(int i=1; i<=N; i++) dist[i] = 0;

    // １つの最遠点からの距離計算
    calc_dist(node1);

    // 最大距離を取得
    max_dist = 0;
    for(int i=1; i<=N; i++){
        max_dist = max(max_dist, dist[i]);
    }

    // answer
    cout << max_dist + 1 << endl;

    return 0;
}