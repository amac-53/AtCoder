#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    string S; cin >> S;

    long long res = 0;
    for(int i=N-1; i>0; i--){
        if(S[i] != S[i-1]){
            res += N - i;
            N++;
        }
    }
    cout << res << endl;
    return 0;
}