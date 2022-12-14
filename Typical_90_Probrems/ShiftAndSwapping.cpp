#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, Q; cin >> N >> Q;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    
    int strt = 0;
    for(int i=0; i<Q; i++){
        int t; cin >> t;
        int x, y; cin >> x >> y;

        if(t == 1){
            int tmp = A[(strt + x - 1) % N];
            A[(strt + x - 1) % N] = A[(strt + y - 1) % N];
            A[(strt + y - 1) % N] = tmp;
        }
        if(t == 2){ 
            strt = (strt + N - 1) % N;
        }
        if(t == 3){
            cout << A[(strt + x - 1) % N] << endl;
        }
    }
    return 0;
}