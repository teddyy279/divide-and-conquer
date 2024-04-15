#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int a[], int n,int x){
    int l = 0, r = n - 1;
    int res = - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == x){
            return res = mid;
        }
        else if(a[mid] > x){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    if(BinarySearch(a, n, x) != - 1){
        cout << "YES";
    }
    else{ 
        cout << "NO";
    }
}