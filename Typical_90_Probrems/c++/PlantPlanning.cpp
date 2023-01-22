#include<bits/stdc++.h>

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> X(N), Y(N);
    for(int i=0; i<N; i++)  cin >> X[i] >> Y[i];

    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    int plant_x, plant_y;
    if(N % 2 == 0){
        plant_x = (X[N/2 -1] + X[N/2]) / 2;
        plant_y = (Y[N/2 -1] + Y[N/2]) / 2;
    }else{
        plant_x = X[(N - 1) / 2];
        plant_y = Y[(N - 1) / 2];
    }

    // ans
    long long res = 0;
    for(int i=0; i<N; i++){
        res += abs(X[i] - plant_x);
        res += abs(Y[i] - plant_y);
    }

    cout << res << endl;
    return 0;
}