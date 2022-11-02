#include<iostream>
using namespace std;

long int Euclid(long int x, long int y){
    while(1){
        if(x >= y) x %= y;
        else y %= x;

        if(x == 0) return y;
        if(y == 0) return x;
    }
}

int main(){
    long int A, B, C;
    cin >> A >> B >> C;

    long int gcd_;
    gcd_ = Euclid(Euclid(A, B), C);

    cout << (A / gcd_ + B / gcd_ + C / gcd_  -3) << endl;

    return 0;
}