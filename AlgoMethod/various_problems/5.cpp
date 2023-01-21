#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for(int i=0; i<30; i++){
        int hs, ms, he, me;
        cin >> hs >> ms >> he >> me;
        int work_time = (he - hs)*60 + me - ms;
        if(work_time > 8*60) work_time -= 60;
        else if(6*60 <= work_time && work_time <= 8*60) work_time -= 45;
        ans += work_time;
    }

    int h_res = ans / 60;
    int m_res = ans - h_res*60;
    cout << h_res << " " << m_res << endl;
    return 0;
}