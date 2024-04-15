#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

struct Matrix{
    long long f[15][15];
};

long long n, k;
Matrix operator * (Matrix a, Matrix b){
    Matrix c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c.f[i][j] = 0;
            for(int k = 0; k < n; k++){
                c.f[i][j] += (a.f[i][k]* b.f[k][j]) % mod;
                c.f[i][j] %= mod;
            }
        }
    }
    return c;
}

Matrix PowMod(Matrix a, long long n){
    if(n == 1) return a;
    Matrix x = PowMod(a, n / 2);
    if(n % 2 == 0) return x * x;
    else return a * x * x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    Matrix a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a.f[i][j];
        }
    }
    Matrix res = PowMod(a, k);
    for(int i = 0; i < n; i++){
        for(int  j = 0; j < n; j++){
            cout << res.f[i][j] << ' ';
        }
        cout << endl;
    }
}
