//https://www.hackerrank.com/challenges/frequency-queries/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include <bits/stdc++.h>
using namespace std;

int main() {

    map<int, int> mp; //map auxiliar

    map<int, int> auxiliar;

    int n;
    cin>>n;
    while(n--) {
        int a, b;
        cin>>a>>b;
        if(a == 1) {
            if(mp[b] != 0) auxiliar[mp[b]]--;
            mp[b]++;    
            auxiliar[mp[b]]++;
        
        } else if(a == 2) {
            if(mp[b] > 0) {
                auxiliar[mp[b]]--;
                mp[b]--;
                auxiliar[mp[b]]++;
            }
        } else {
            if(auxiliar[b] > 0) cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
    }


}