// https://www.hackerrank.com/challenges/count-triplets-1/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int r;
    cin>>n>>r;
    map<int, int> presenca;
    
    map<int, int> qtdAntes;
    
    long long int ans = 0;

    int vet[n];
    
    for(int i = 0; i < n; ++i) {
        
        scanf("%d", &vet[i]);

        presenca[vet[i]]++;
        if(r != 1){
            qtdAntes[vet[i]]+=presenca[vet[i]/r];
            if(vet[i]/(r*r) > 0 && vet[i]%r==0 && (vet[i]/r)%r==0) {
                ans+=qtdAntes[vet[i]/r];
            }
        }
    }

    if(r == 1) {
        ans = 0;
        for(int i = 0; i < n; ++i) {
            if(presenca[vet[i]] < 3) continue;
            long long int mds = presenca[vet[i]];
            ans += mds*(mds-1)*(mds-2)/6;
            presenca[vet[i]] = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}