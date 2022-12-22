#include<bits/stdc++.h>

using namespace std;

int main(){
    int N; cin >> N;
    vector<long long> A(2*N), sum(2*N);
    for(int i=0; i<N; i++){
        int num; cin >> num;
        A[i] = num;
        A[N+i] = num;
    }

    // 累積和
    for(int i=0; i<2*N; i++){
        sum[i] = A[i];
        if(i > 0) sum[i] += sum[i-1];
    }

    // 10分の1が整数でなければ，No
    if(sum[N-1] % 10 != 0){
        cout << "No" << endl;
        return 0;
    }

    int flag = false;
    for(int i=0; i<N; i++){

        long long ans = sum[i] + sum[N-1] / 10.0;
        int ng = 0;
        int ok = 2*N;
        // 二分探索
        while(ok - ng != 1){
            int mid = (ng + ok) / 2;
            if(sum[mid] >= ans) ok = mid;
            else ng = mid; 
        }
        if(sum[ok] == ans) flag = true;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}