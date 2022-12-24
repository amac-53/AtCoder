#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N, P, Q; cin >> N >> P >> Q;
    vector<long long> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    long long res = 0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){
                for(int l=k+1; l<N; l++){
                    for(int m=l+1; m<N; m++){
                        long long ans = A[i] % P * A[j] % P * A[k] % P * A[l] % P * A[m] % P;
                        if(ans == Q) res++;
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}