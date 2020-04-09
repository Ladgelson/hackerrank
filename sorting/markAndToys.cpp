#include <bits/stdc++.h>
using namespace std;
#define MAX 100010

int n, k;
int arr[MAX];

void maximumToys(){
    int cont = 0;
    for(int i=0;i<n;++i){
        if(k-arr[i]>=0){
            k-=arr[i];
            cont++;
        }
    }
    cout << cont << endl;
}

int main(){
    cin >> n >> k;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    maximumToys();
    return 0;
}