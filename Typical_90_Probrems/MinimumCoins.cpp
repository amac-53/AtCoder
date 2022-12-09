#include<iostream>

using namespace std;

const int M_NUM = 9999;

int main(){
    long long N; cin >> N;
    long long A, B, C; cin >> A >> B >> C;

    int ans = M_NUM;
    for(int i=0; i<=M_NUM; i++){
        for(int j=0; j<=M_NUM-i; j++){
            long long rest = N - A*i - B*j;
            if(rest % C == 0 && rest >= 0){
                int tmp = i + j + (rest / C);
                if(ans > tmp){
                    ans = tmp;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}