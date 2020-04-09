// https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings
#include <bits/stdc++.h>
using namespace std;

string s;

int letters[26];

void isValid(string s){

    memset(letters, 0, sizeof letters);

    map<int, int> mp;

    for(int i=0;i<s.size();++i){
        
        if(mp[letters[s[i]-97]] != 0) mp[letters[s[i]-97]]--;

        letters[s[i]-97]++;

        mp[letters[s[i]-97]]++;
    }    

    int maiorFreq = 0, padrao = 0;

    for(int i = 0; i < s.size() ; ++i) {
        if(mp[i] > maiorFreq) {
            padrao = i;
            maiorFreq = mp[i];
        }
    }
    
    bool isvalid = true, save = true;

    for(int i = 0; i < 26; ++i) {
        if(letters[i] != padrao && letters[i] > 0) {
            if((letters[i]-1 == padrao || letters[i]-1 == 0) && save ) save = false;
            else isvalid = false;
        }
    }
    isvalid ? cout<<"YES\n" : cout<<"NO\n";
}

int main(){
    cin >> s;
    isValid(s);
    return 0;
}