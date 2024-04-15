#include<bits/stdc++.h>

using namespace std;

long long crossingSum(int a[], int l, int r, int mid){
    long long sumleft = 0, maxsumleft = 0;
    long long sumright = 0, maxsumright = 0;
    for(int i = mid; i >= 0; i--){
        sumleft += a[i];
        maxsumleft =  max(sumleft, maxsumleft);
    }
    for(int i = mid + 1; i <= r; i++){
        sumright += a[i];
        maxsumright = max(sumright, maxsumright);
    }
    return maxsumleft + maxsumright;
}

long long maxSum(int a[], int l, int r){
    if(l == r) return a[l];
    int mid = (l + r) / 2;
    return max({maxSum(a, l, mid),
                maxSum(a, mid + 1, r),
                crossingSum(a, l, r, mid)});
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; 
    for(int &x : a) cin >> x;
    cout << maxSum(a, 0, n - 1);
}