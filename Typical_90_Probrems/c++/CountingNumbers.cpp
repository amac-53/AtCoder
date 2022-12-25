#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;


int main(){
    string L, R; cin >> L >> R;

    start_digit = L.size();
    end_digit = R.size();

    long long ans = 0;

    // L, Rをlong longに戻しておく
    long long L = stoll(L);
    long long R = stoll(R);

    // ２の逆元求めておく
    long long inversed2 = pow(2, MOD-2) % MOD;

    // 計算
    long long ans = 0;
    for(int i=start_digit; i<end_digit+1; i++){
        // 同じ桁数なら
        if(i == start_digit && i == end_digit){
            ans = (L + R) % MOD * (R - L + 1) % MOD * inversed2 % MOD;
        }
        // 異なる桁数なら
        else{
            if(i == start_digit){
                // その桁の最大値を算出
                string i_digit_max_num;
                for(int j=1; j<=i; j++){
                    i_digit_max_num += char(9);
                }
                long long M = stoll(i_digit_max_num) % MOD;
                ans += (L + M) % MOD * (M - L + 1) % MOD * inversed2;
            }else if(i == end_digit){
                // その桁の最小値を算出
                string i_digit_min_num;
                for(int j=1; j<=i; j++){
                    // 最小値
                    if(j == 1)  i_digit_min_num += char(1);
                    else i_digit_min_num += char(0);
                }
                long long m = stoll(i_digit_min_num) % MOD;
                
                ans += (m + R) % MOD *(R - m + 1) % MOD * inversed2 % MOD;
            }else{
                // その桁の最大値・最小値を算出
                string i_digit_max_num, i_digit_min_num;
                for(int j=1; j<=i; j++){
                    // 最小値
                    if(j == 1)  i_digit_min_num += char(1);
                    else i_digit_min_num += char(0);
                    // 最大値
                    i_digit_max_num += char(9);
                }
                long long m = stoll(i_digit_min_num) % MOD;
                long long M = stoll(i_digit_max_num) % MOD;
                ans += (m + M) % MOD *(M - m + 1) % MOD * inversed2 % MOD;
            }
        }
        cout << ans << endl;
    }
}