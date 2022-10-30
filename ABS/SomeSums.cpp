#include<iostream>
using namespace std;

int TotalDigitNum(int num){
    int res = 0;
    while(num > 0){
        res += (num % 10);
        num /= 10;
    }
    return res;
}

int main(){
    int N, A, B;
    cin >> N >> A >> B;

    int res = 0;
    for(int i=1; i<=N; i++){
        if(A <= TotalDigitNum(i) && TotalDigitNum(i) <= B) res += i;
    }
    cout << res << endl;
    return 0;
}