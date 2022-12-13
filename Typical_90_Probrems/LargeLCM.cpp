#include<bits/stdc++.h>

using namespace std;

const long long MAX = 1e18; 

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    long long a, b; cin >> a >> b;
    long long tmp = a / gcd(a, b);
    if(b > MAX / tmp) cout << "Large" << endl;
    else cout << tmp*b << endl;
    return 0; 
}