#include<iostream>

using namespace std;

int main(){
    int N;
    int t[100010], x[100010], y[100010];

    cin >> N;

    t[0] = x[0] = y[0] = 0;
    for(int i=1; i<=N; i++){
        cin >> t[i] >> x[i] >> y[i];
    }

    int pass_time, x_move, y_move;
    for(int i=0; i<N; i++){
        pass_time = t[i+1] - t[i];
        x_move = abs(x[i+1] - x[i]);
        y_move = abs(y[i+1] - y[i]);

        if(pass_time - (y_move + x_move) < 0){
            cout << "No" << endl;
            return 0;
        }else{
            if((pass_time - (y_move + x_move)) % 2 == 1){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}