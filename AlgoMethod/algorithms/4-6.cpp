#include<bits/stdc++.h>
using namespace std;

vector<int> A(101);
vector<vector<int>> able(101, vector<int>(10001, -1));

int isable(int i, int j){
    // 既知なら
    if(able[i][j] != -1) return able[i][j];
    
    // もし知らなければ
    if(i == 0){
        if(j == 0) able[i][j] == 1;
        else able[i][j] == 0;
    }else{
        able[i][j] = 0;
        if(j >= A[i-1] && isable(i-1, j-A[i-1]) == 1){
            able[i][j] = 1;
        }
        if(isable(i-1, j) == 1){
            able[i][j] = 1;
        }
    }
    return able[i][j];
}

int main(){
    int N, X; cin >> N >> X;
    for(int i=0; i<N; i++) cin >> A[i];
    if(isable(N, X) == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}