#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int a[], int n, int t){
    int l = 0, r = n - 1;
    int res = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] <= t){
            l = mid + 1;
            res = mid;
        }
        else{
            r = mid - 1;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    int a[n];
    for(int &x : a) cin >> x;
    int x = BinarySearch(a, n, t);
    cout << a[x];
}
