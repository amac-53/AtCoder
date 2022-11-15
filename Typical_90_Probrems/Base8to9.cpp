#include<iostream>

using namespace std;

long long Eight2Ten(string S){
    long long ans = 0;
    for(int i=0; i<S.size(); i++){
        ans *= 8;
        ans += (S[i] - '0');
    }
    return ans;
}

string Ten2Nine(long long n){
    string ans;

    if(n == 0) return "0";
    while(n > 0){
        ans = char(n % 9 + '0') + ans;
        n /= 9;
    }
    return ans;
}

int main(){
    string N; cin >> N;
    int K; cin >> K;

    for(int i=0; i<K; i++){
        N = Ten2Nine(Eight2Ten(N));
        for(int j=0; j<N.size(); j++){
            if(N[j] == '8') N[j] = '5';
        }
    }
    cout << N << endl;
    return 0;
}