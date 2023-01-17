#include<bits/stdc++.h>
using namespace std;


int summation(int A, int B){
    if(B == A) return B;
    else return summation(A, B-1) + B;
}

int main(){
    int A, B; cin >> A >> B;
    cout << summation(A, B) << endl;
    return 0;
}