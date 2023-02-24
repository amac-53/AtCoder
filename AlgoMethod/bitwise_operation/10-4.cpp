#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<string> w(N);
    for(int i=0; i<N; i++) cin >> w[i];

    int res = 1e8;
    for(int i=0; i<(1<<N); i++){
        map<char, int> M;
        int cnt = 0; 
        for(int j=0; j<N; j++){
            if(i & (1 << j)){
                cnt++;
                for(int k=0; k<w[j].size(); k++)  M[w[j][k]] = 1;
            }
        }
        if(M.size() == 26){
            res = min(res, cnt);
        } 
    }

    if(res == 1e8) res = -1;
    cout << res << endl;
    return 0;
}