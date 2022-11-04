#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string, int> m;
    int N;
    cin >> N;
    string S[100010];
    for(int i=0; i<N; i++){
        cin >> S[i];
    }

    for(int i=0; i<N; i++){
        if(m[S[i]] == 0){
            m[S[i]] = 1;
            cout << (i+1) << endl;
        }
    }
    return 0;
}