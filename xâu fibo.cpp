#include<bits/stdc++.h>

using namespace std;

int mod = 1000000007;

long long F[93];

void ktao(){
    F[1] = 1; F[2] = 1;
    for(int i = 0; i < 93; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

char solve(int n, long long k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n - 2]){
        return solve(n - 2, k);
    }
    else{
        return solve(n - 1,k - F[n - 1]);
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    cout << solve(n, k);
}
