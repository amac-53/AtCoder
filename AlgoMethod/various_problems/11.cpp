#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    int M = 0;
    for(int i=0; i<N; i++){
        if(M < A[i]) M = A[i];
        cout << M << endl;
    }
    return 0;
}