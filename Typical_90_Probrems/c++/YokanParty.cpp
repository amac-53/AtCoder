#include<bits/stdc++.h>

using namespace std;

int N, K, L;

bool isable(long long v, vector<long long> &A){
    long long prev = 0, cnt = 0;
    for(int i=0; i<N; i++){
        if(A[i] - prev >= v && L - A[i] >= v){
            cnt++;
            prev = A[i];
        }
    }
    if(cnt >= K) return true;
    else return false;
}


int main(){
    cin >> N >> L >> K;
    vector<long long> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    long long ok = 0, ng = L+1; 
    while(ng - ok != 1){
        long long mid = (ok + ng) / 2;
        if(isable(mid, A)) ok = mid;
        else ng = mid; 
    }
    cout << ok << endl;
    return 0;
}