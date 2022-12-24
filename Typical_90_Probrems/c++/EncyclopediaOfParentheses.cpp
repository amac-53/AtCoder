#include<iostream>
#include<string>
using namespace std;

int main(){
    int N; cin >> N;
    for(int i=(1 << N)-1; i>=0; i--){
        int cnt = 0;
        string s;
        bool flag = false;
        for(int j=N-1; j>=0; j--){
            if(i & (1 << j)){
                s += "(";
                cnt++;
            }else{
                s += ")";
                cnt--;
            }
            if(cnt < 0) flag = true;
        }
        if(cnt == 0 && !flag) cout << s << endl;
    }
    return 0;
}