#include<iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int A[1010], B[1010];
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<N; i++) cin >> B[i];

    int sum = 0;
    for(int i=0; i<N; i++) sum += abs(A[i]- B[i]);
    if(K >= sum && (K-sum)%2 == 0){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}