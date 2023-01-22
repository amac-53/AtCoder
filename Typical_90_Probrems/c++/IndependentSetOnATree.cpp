#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9;
vector<vector<int>> G(1e5+1, vector<int>());
vector<int> color(1e5+1, INF);

void dfs(int node, int col){
    color[node] = col;  // 色塗り（0 or 1）
    for(auto next: G[node]){
        if(color[next] == INF) dfs(next, 1 - col);
    }
}

int main(){

    int N; cin >> N;
    for(int i=0; i<N-1; i++){
        int a, b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 色塗り
    dfs(1, 0);

    int sum = 0, cnt = 1, judge = 0;
    for(int i=1; i<=N; i++) sum += color[i];

    if(sum >= N / 2) judge = 1;
    for(int i=1; i<=N; i++){
        if(color[i] == judge && cnt <= N / 2){
            cout << i << " ";
            cnt++;
        }
    }

    return 0;
}