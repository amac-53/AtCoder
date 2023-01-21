#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    int n0, d0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '/'){
            n0 = stoi(s.substr(0, i));
            d0 = stoi(s.substr(i+1));
        }
    }
    int common = gcd(n0, d0);
    int n1 = n0 / common;
    int d1 = d0 / common;
    cout << n1 << "/" << d1 << endl;
    return 0;
}