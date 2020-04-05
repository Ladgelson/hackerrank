//https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include <bits/stdc++.h>
using namespace std;

int p;

void twoStrings(string a, string b){
    map<char, int> letters;
    for(int i=0;i<a.size();++i){
        letters[a[i]]=-1;
    }
    for(int i=0;i<b.size();++i){
        if(letters[b[i]]==-1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int main(){
    cin >> p;
    while(p--){
        string a,b;
        cin >> a >> b;
        twoStrings(a,b);
    }
    return 0;
}