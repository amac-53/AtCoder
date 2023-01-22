#include<bits/stdc++.h>

using namespace std;


void enumerate_divisor(long long K, vector<long long> &div){
    for(long long i=1; i*i<=K; i++){
        if(K % i == 0){
            div.push_back(i);
            // 平方数でないなら追加
            if(i != K / i) div.push_back(K / i);
        }
    }
    // 先に昇順にしておく
    sort(div.begin(), div.end());
}

int main(){

    long long K; cin >> K;

    vector<long long> div;
    // 約数列挙
    enumerate_divisor(K, div);

    long long res = 0;
    for(int i=0; i<(int)div.size(); i++){
        for(int j=i; j<(int)div.size(); j++){
            if(div[j] > (K / div[i])) continue;  // オーバーフロー対策
            if(K % (div[i] * div[j]) == 0LL && K / (div[i] * div[j]) >= div[j]) res++;
        }
    }
    cout << res << endl;
    return 0;
}