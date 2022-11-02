#include<iostream>
using namespace std;

int main(){
    int N;
    int C[100010], P[100010];
    cin >> N;
    for(int i=1; i<=N; i++) cin >> C[i] >> P[i];
    int Q;
    cin >> Q;
    int L[100010], R[100010];
    for(int i=1; i<=Q; i++) cin >> L[i] >> R[i];

    // accumulated sum
    long int sum1[100010], sum2[100010];
    sum1[0] = 0;
    sum2[0] = 0;
    for(int i=1; i<=N; i++){
        if(C[i] == 1){
            sum1[i] = sum1[i-1] + P[i];
            sum2[i] = sum2[i-1];
        }else{
            sum1[i] = sum1[i-1];
            sum2[i] = sum2[i-1] + P[i];
        }
    }

    for(int i=1; i<=Q; i++){
        cout << (sum1[R[i]] - sum1[L[i]-1]) << " " << (sum2[R[i]] - sum2[L[i]-1]) << endl;
    }
    return 0;
}