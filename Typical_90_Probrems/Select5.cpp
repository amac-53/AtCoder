#include<iostream>
using namespace std;

// なんでかうまくいかん
int main(){
    long int N, P, Q;
    int A[110];
    cin >> N >> P >> Q;
    for(int i=0; i<N; i++) cin >> A[i];

    int res = 0;
    for(int i=0; i<N; i++){
        long long ans = (A[i]%P);
        for(int j=i+1; j<N; j++){
            ans = ans*A[j]%P;
            for(int k=j+1; k<N; k++){
                ans = (ans*A[k])%P;
                for(int l=k+1; l<N; l++){
                    ans = (ans*A[l])%P;
                    for(int m=l+1; m<N; m++){
                        if((ans*A[m])%P == Q) res++;
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}