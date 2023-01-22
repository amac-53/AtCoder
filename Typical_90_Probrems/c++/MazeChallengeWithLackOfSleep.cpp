#include<bits/stdc++.h>

using namespace std;

struct state{
    int x, y, dir;
};

int main(){

    int H, W; cin >> H >> W;
    int rs, cs; cin >> rs >> cs;
    int rt, ct; cin >> rt >> ct;

    vector<string> S(H);
    for(int i=0; i<H; i++)  cin >> S[i];

    deque<state> deq;

    // 0-1 BFS
    while(!deq.empty()){
        state tmp = deq.front(), deq.pop();

        for(int i=0; i<4; i++){
            
        }
    }
    return 0;
}