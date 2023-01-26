#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<double> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    sort(A.begin(), A.end());
    
    cout << fixed << setprecision(7);
    if(N % 2 == 0) cout << (A[N / 2 - 1] + A[N / 2]) / 2.0 << endl;
    else cout << A[(N-1) / 2] << endl;
    return 0;
}