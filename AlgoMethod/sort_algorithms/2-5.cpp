#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N, K; cin >> N >> K;
    vector<pair<long long, long long>> meshi(N);
    for(int i=0; i<N; i++){
        cin >> meshi[i].first >> meshi[i].second;
    }

    sort(meshi.begin(), meshi.end());
    long long res = 0;
    for(int i=0; i<N; i++){
        if(K <= 0) break;
        long long num = min(K, meshi[i].second);
        res += meshi[i].first * num;
        K -= num;
    }
    cout << res << endl;
    return 0;
}