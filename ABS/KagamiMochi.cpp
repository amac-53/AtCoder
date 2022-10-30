#include<iostream>

using namespace std;

int main(){
    int N, d[110];
    cin >> N;
    for(int i=0; i<N; i++) cin >> d[i];

    bool cnt[110];
    for(int i=0; i<110; i++) cnt[i] = false;

    for(int i=0; i<N; i++) cnt[d[i]] = true;

    int res = 0;
    for(int i=0; i<110; i++){
        res += cnt[i];
    }

    cout << res << endl;

    return 0;
}