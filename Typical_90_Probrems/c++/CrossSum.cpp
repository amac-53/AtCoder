#include<iostream>
using namespace std;

short int A[2010][2010];
int row_sum[2010];
int column_sum[2010];
int res[2010][2010];


int main(){
    int H, W;
    cin >> H >> W;

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> A[i][j];
        }
    }

    for(int i=0; i<H; i++){
        row_sum[i] = 0;
        for(int j=0; j<W; j++){
            row_sum[i] += A[i][j];
        }
    }

    for(int i=0; i<W; i++){
        column_sum[i] = 0;
        for(int j=0; j<H; j++){
            column_sum[i] += A[j][i];
        }
    }

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            res[i][j] = row_sum[i] + column_sum[j] - A[i][j];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}