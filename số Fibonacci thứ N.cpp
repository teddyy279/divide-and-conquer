#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

struct Matrix{
    long long f[2][2];
};

Matrix operator * (Matrix a, Matrix b){
    Matrix c;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            c.f[i][j] = 0;
            for(int k = 0; k < 2; k++){
                c.f[i][j] += (a.f[i][k] % mod * b.f[k][j] % mod) % mod;
                c.f[i][j] %= mod;
            }
        }
    }
    return c;
}

Matrix PowMod(Matrix a, long n){
    if(n == 1) return a;
    Matrix x = PowMod(a, n / 2);
    if(n % 2 == 0) return x * x;
    else return a * x * x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n; cin >> n;
    Matrix a;
    a.f[0][0] = a.f[1][0] = a.f[0][1] = 1;
    a.f[1][1] = 0;
    Matrix res = PowMod(a, n);
    cout << res.f[1][0];
}
