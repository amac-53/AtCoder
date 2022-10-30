#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    string seq[] = {"dream", "dreamer", "erase", "eraser"};
    
    reverse(s.begin(), s.end());
    for(int i=0; i<4; i++) reverse(seq[i].begin(), seq[i].end());

    for(int i=0; i<s.length();){
        bool flag = false;
        for(int j=0; j<4; j++){
            if(s.substr(i, seq[j].length()) == seq[j]){
                flag = true;
                i += seq[j].length();
            }
        }

        if(!flag){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}