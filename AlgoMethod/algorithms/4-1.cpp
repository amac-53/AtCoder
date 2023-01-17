#include<bits/stdc++.h>
using namespace std;

int f(int x){
    if(x == 0) return 0;
    else return f(x - 1) + x;
}

int main(){
    int N; cin >> N;
    cout << f(N) << endl;
    return 0;
}