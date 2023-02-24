#include <bits/stdc++.h>
using namespace std;

int main() {

    int N; cin >> N;
    bool flag = false;

    for(int i=0; i<(1<<8); i++){
        vector<int> vec = {1};
        for(int j=0; j<8; j++){
            if(i & (1 << j)){
                vec.back() *= (j + 2);
            }else{
                vec.push_back(j + 2);
            }
        }
        int res = 0;
        for(auto v: vec) res += v;
        if(res == N){
            flag = true;
            break;
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}