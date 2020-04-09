#include <bits/stdc++.h>
using namespace std;
#define MAXN 610

int n;
int arr[MAXN];

void countSwaps(){
    int cont = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (arr[j] > arr[j + 1]) {
                cont++;
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",cont);
    printf("First Element: %d\n",arr[0]);
    printf("Last Element: %d\n",arr[n-1]);
}

int main(){
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    countSwaps();
    return 0;
}