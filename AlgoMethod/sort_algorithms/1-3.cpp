#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    // insertion sort
    for(int i=1; i<N; i++){
        int pos = i;
        while(pos != 0 && A[pos - 1] > A[pos]){
            swap(A[pos-1], A[pos]);
            pos--;
        }
        
        for(int i=0; i<N; i++) cout << A[i] << " ";
        cout << endl;
    }
}