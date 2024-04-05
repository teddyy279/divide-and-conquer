#include<bits/stdc++.h>

using namespace std;

int mod = 1000000007;

int reverse(int n){
    int res = 0;
    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

long long binpow(long long a, long long b){
    if(b == 0){
        return 1;
    }
    long long x = binpow(a, b / 2);
    if(b % 2 == 0){
        return (x % mod) * (x % mod) % mod;
    }
    else{
        return ((a % mod) * (x % mod) % mod) * (x % mod) % mod;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << binpow(n, reverse(n));
}
