#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[101];
    for(int i=0; i<N; i++) cin >> A[i];

    sort(A, A+N, greater<int>());
    int res = 0;
    for(int i=0; i<N; i++){
        if(i % 2 == 0) res += A[i];
        else res -= A[i];
    }
    cout << res << endl;
    return 0;
}