#include<bits/stdc++.h>
using namespace std;

vector<int> x(1e5);

bool isable(int d, int n, int k){
    // 貪欲
    int left = -1e9, res = 0;
    for(int i=0; i<n; i++){
        if(x[i] - left >= d){
            left = x[i];
            res++;
        }
    }
    return (res >= k);
}

int main(){
    int N, K; cin >> N >> K;
    for(int i=0; i<N; i++) cin >> x[i];

    // 二分探索
    int ng = 1e9, ok = 1;
    while(ng - ok != 1){
        int mid = (ng + ok) / 2;
        if(isable(mid, N, K)) ok = mid;
        else ng = mid;
    }
    cout << ok << endl;
    return 0;
}