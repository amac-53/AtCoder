#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    // selection sort
    for(int i=0; i<N-1; i++){
        int min_idx = i;
        for(int j=i+1; j<N; j++){
            if(A[min_idx] > A[j]){
                min_idx = j;
            }
        }
        swap(A[i], A[min_idx]);

        for(int j=0; j<N; j++) cout << A[j] << " ";
        cout << endl;
    }
    return 0;
}