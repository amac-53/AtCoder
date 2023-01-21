#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    int cnt = 0, M = 0;
    for(int i=0; i<N; i++){
        if(M == A[i]) cnt++;
        else if(M < A[i]){
            M = A[i];
            cnt = 1;
        }
        cout << cnt << endl;
    }
    return 0;
}