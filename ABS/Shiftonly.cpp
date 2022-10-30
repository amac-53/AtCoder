#include<iostream>

using namespace std;

int main(){
    int N;
    int A[201];
    cin >> N;
    for(int i=0; i<N; i++) cin >> A[i];

    int res = 0;
    bool flag = false;
    while(true){
        for(int i=0; i<N; i++){
            if(A[i] % 2 == 1) flag = true;
            else A[i] /= 2;
        }
        if(flag==true) break;
        res ++;
    }
    cout << res << endl;
    return 0;
}