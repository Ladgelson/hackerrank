// https://www.hackerrank.com/challenges/special-palindrome-again/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>
using namespace std;

int ans = 0;
map<char, int> mp;

bool specialString(string s){
    int mid = (s.size()-1)/2;
   
    if(mp.size() == 1) return true;

    map<char, int>::iterator itr; 
    for (itr = mp.begin(); itr != mp.end(); ++itr) { 
        if(itr->second == 1 && itr->first == s[mid]) {
            return true;
        }
    } 
    return false;
}

void substrCount(string s){
    for(int i = 0; i < s.size(); ++i) {
        mp.clear();
        string runner = "";
        runner += s[i];
        mp[s[i]]++;
        for(int j = i+1; j < s.size(); ++j) {
            mp[s[j]]++;

            if(mp.size() > 2) break;

            bool DaN = false;
            
            if(mp.size() > 1) {
                map<char, int>::iterator itr;
                for (itr = mp.begin(); itr != mp.end(); ++itr) { 
                    if(itr->second == 1) {
                        DaN = true;
                    }
                }
                if(!DaN) break;
            }
            runner += s[j];
            if(mp.size() > 1 && runner.size()%2 == 0) continue;
            
            //cout << runner << " " << ans << endl;
            if(mp.size() == 1) ans++;
            else ans += specialString(runner);
        }
    }
}

int main(){
    int n;
    string s;
    cin >> n >> s;
    substrCount(s);
    ans += n;
    cout<<ans<<endl;
    return 0;
}