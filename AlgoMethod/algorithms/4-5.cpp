#include<bits/stdc++.h>
using namespace std;

vector<int> A(21);

bool func(int i, int j){
    if(i == 0){
        if(j == 0) return true;
        else return false;
    }else{
        bool flag = false;
        if(j >= A[i-1] && func(i-1, j-A[i-1])) flag = true;
        if(func(i-1, j)) flag = true;
        return flag;
    }
}

int main(){
    int N, X; cin >> N >> X;
    for(int i=0; i<N; i++) cin >> A[i];
    if(func(N, X)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}