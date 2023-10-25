#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,  a[10000], ok;

void swap(int& a, int& b) {
  int temp = a; // store a in temp
  a = b; // assign b to a
  b = temp; // assign temp to b
}

void ktao(){
    for (int i = 1; i <=n ; i++){
        a[i]=i;
    }
}

void sinh(){
    int i = n-1;
    while (i>=1 && a[i]>a[i+1]){
        --i;
    }
    if (i==0)
    {
        ok=0;
    }
    else
    {
        //di tim thang > a[i] trong doan i+1;n
        int j=n;
        while (a[i]>a[j]) --j;
        swap(a[i],a[j]);
        int l = i+1, r=n;
        while (l<r){
            swap(a[l],a[r]);
            ++l;--r;
        }   
    }
}

int main(){
    cin >> n;
    ok =1;
    ktao();
    while (ok){
        for (int i = 1; i <=n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}