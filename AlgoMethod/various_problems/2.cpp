#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;

    for(int i=1; i<=N; i++){
        string ans = "";
        if(i % 4 == 0) ans += "Fizz";
        if(i % 6 == 0) ans += "Buzz";
        
        if(ans == "") cout << i << endl;
        else cout << ans << endl;
    }
    return 0;
}