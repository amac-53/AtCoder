#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    string ans = "";
    for(int i=0; i<N; i++) ans += '0';
    ans = '1' + ans;
    cout << ans << endl;
    return 0;
}