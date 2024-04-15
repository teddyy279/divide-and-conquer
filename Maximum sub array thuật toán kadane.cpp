#include<bits/stdc++.h>

using namespace std;

long long kadane(int a[], int n){
    long long ans = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if(sum + a[i] > 0){
            sum += a[i];
        }
        else{
            sum = 0;
        }
        ans = max(ans, sum);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << kadane(a, n);
}