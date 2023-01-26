#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    vector<int> A(N), X(M);
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<M; i++) cin >> X[i];

    sort(A.begin(), A.end());

    for(int i=0; i<M; i++){
        cout << A[X[i]] << endl;
    }
    return 0;
}