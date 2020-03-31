#include <bits/stdc++.h>
using namespace std;
#define MAX 100010
int n, d;

int arr[MAX];

int main(){
    cin >> n >> d;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    for(int i=d;i<n;++i){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<d;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}