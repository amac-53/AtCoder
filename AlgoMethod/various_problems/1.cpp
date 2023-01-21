#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> overlap(101);

    for(int i=0; i<2; i++){
        int s, t; cin >> s >> t;
        for(int i=s; i<t; i++) overlap[i] += 1;
    }

    int ans = 0;
    for(auto v: overlap){
        if(v == 2) ans++;
    }

    cout << ans << endl;
    return 0;
}