#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    if(N % 400 == 0) cout << "Yes" << endl;
    else if(N % 100 == 0) cout << "No" << endl;
    else if(N % 4 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}