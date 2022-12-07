#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N; cin >> N;
    vector<long long> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    int Q; cin >> Q;
    vector<long long> B(Q);
    for(int i=0; i<Q; i++){
        cin >> B[i];
    }

    for(int i=0; i<Q; i++){
        long long ng = -1;
        long long ok = N-1;
        while(ok - ng > 1){
            long long mid = (ng + ok) / 2;
            if(A[mid] >= B[i]) ok = mid;
            else ng = mid; 
        }
        
        int ans;
        if(N == 1) ans = abs(A[ok] - B[i]); 
        else ans = min(abs(A[ok] - B[i]), abs(A[ng] - B[i]));
        cout << ans << endl;
    }

    return 0;
}