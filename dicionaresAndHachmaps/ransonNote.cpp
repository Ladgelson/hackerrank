//https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include <bits/stdc++.h>
using namespace std;

int n, m;

int main(){
    cin >> n >> m;
    string aux;
    map<string,int> s;
    for(int i=0;i<n;i++){
        cin >> aux;
        s[aux]++;
    }
    bool isRansonNote = true;
    for(int i=0;i<m;i++){
        cin >> aux;
        s[aux]--;
        if(s[aux] < 0){
            isRansonNote = false;
        }
    }
    if(isRansonNote) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}