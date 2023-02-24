#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, V; cin >> N >> V;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    for(int i=0; i<(1<<N); i++){
        int res = 0;
        for(int j=0; j<N; j++){
            if(i & (1 << j)){
                res += A[j];
            }
        }
        if(res == V){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}