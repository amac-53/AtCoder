#include<bits/stdc++.h>

using namespace std;

const int NUM = 46;

int main(){
    int N; cin >> N;

    // 剰余ごとに保持
    vector<long long> A(NUM, 0), B(NUM, 0), C(NUM, 0);
    for(int i=0; i<N; i++){
        int a; cin >> a;
        A[a%NUM]++;
    }
    for(int i=0; i<N; i++){
        int a; cin >> a;
        B[a%NUM]++;
    }
    for(int i=0; i<N; i++){
        int a; cin >> a;
        C[a%NUM]++;
    }

    long long ans = 0;
    for(int i=0; i<NUM; i++){
        for(int j=0; j<NUM; j++){
            for(int k=0; k<NUM; k++){
                int sum = ((i % NUM) + (j % NUM) + (k % NUM)) % NUM;
                if(sum % 46 == 0) ans += A[i]*B[j]*C[k];
            }
        }
    }    
    cout << ans << endl;
    return 0;
}