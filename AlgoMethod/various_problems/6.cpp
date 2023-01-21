#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    map<string, int> menu;

    for(int i=0; i<N; i++){
        string f; cin >> f;
        int c; cin >> c;
        menu[f] = c;
    }

    int res = 0;
    for(int i=0; i<M; i++){
        string x; cin >> x;
        res += menu[x];
    }

    cout << res << endl;
    return 0;
}
