#include<bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    // bubble sort
    for(int i=0; i<N; i++){
        bool flag = false;
        for(int j=0; j<N-1; j++){
            if(A[j] > A[j+1]){
                flag = true;
                swap(A[j], A[j+1]);
            }
        }
        if(flag){
            for(int j=0; j<N; j++){
                cout << A[j] <<" ";
            }
            cout << endl;
        }else{
            break;
        }
    }
    
    return 0;
}