#include <bits/stdc++.h>
using namespace std;
#define MAX 100010

int t,n;
int arr[MAX];

void minimumBribes(int n){
    int answer = 0;
    bool deucerto = true;


    for(int i = n - 1; i >= 0; --i) {
        int cont = 0;
        if(arr[i] !=  i+1) {
            for(int j = i-1; j >=  i-2 && j >= 0; --j) {
                if(arr[j] == i+1) {
                    swap(arr[j], arr[j+1]);
                    answer++;
                    if(j+1 != i) {
                        swap(arr[j+1], arr[j+2]);
                        answer++;
                    }
                    cont--;
                }
                cont++;
                if(cont == 2) {
                    deucerto = false;
                    break;
                }
            }
        }
    }
    if(deucerto) cout<<answer<<endl;
    else cout<<"Too chaotic\n";
}

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;++i){
            cin >> arr[i];
        }
        minimumBribes(n);
    }
    return 0;
}