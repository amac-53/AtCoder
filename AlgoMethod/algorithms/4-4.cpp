#include<bits/stdc++.h>
using namespace std;

vector<long long> fib(81, -1);

long long func(long long x){
    if(fib[x] != -1) return fib[x];
    else{
        fib[x] = func(x-1) + func(x-2);
        return fib[x];
    }
}

int main(){
    int N; cin >> N;
    fib[0] = 0, fib[1] = 1;
    cout << func(N) << endl;
    return 0;
}