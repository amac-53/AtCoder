#include<iostream>
#include<deque>
using namespace std;

int main(){
    int Q; cin >> Q;
    deque<int> d;
    for(int i=0; i<Q; i++){
        int t, x; cin >> t >> x;
        if(t == 1) d.push_front(x);
        else if(t == 2) d.push_back(x);
        else cout << d[x-1] << endl;
    }
    return 0;
}