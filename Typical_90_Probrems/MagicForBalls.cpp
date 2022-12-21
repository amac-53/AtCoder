#include<bits/stdc++.h>
 
using namespace std;
 
void prime_factorization(vector<long long> &p, long long N){
    long long tmp = N;
    for(long long i=2; i*i<=N; i++){
        while(tmp % i == 0){
            p.push_back(i);
            tmp /= i;
        }
    }
    // 残りの素数
    if(tmp != 1) p.push_back(tmp);
}
 
int main(){
    long long N; cin >> N;
    vector<long long> p;
    prime_factorization(p, N);
 
    long long ans = 0;
    int K = (int)p.size();
 
    for (int i=0; i<=24; i++) {
        if((1 << i) >= K){
            ans = i;
            break;
        }
    }
 
    cout << ans << endl;
    return 0;
}