// https://www.hackerrank.com/challenges/sherlock-and-anagrams/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> anagramas;

void countAnagrams(string s){
    for(int i = 0; i < s.size(); ++i) {
        int runner[26];
        vector<int> ans;
        memset(runner, 0, sizeof runner);
        string aux = "";
        aux += s[i];
        for(int k = 0; k < aux.size(); ++k) {
            runner[aux[k]-97]++;
        }
        for(int k = 0; k < 26; ++k) {
            ans.push_back(runner[k]);
        }
        anagramas.push_back(ans);
        ans.clear();
        for(int j = i+1; j < s.size(); ++j) {
            aux += s[j];
            memset(runner, 0, sizeof runner);
            if(aux == s) continue;
            for(int k = 0; k < aux.size(); ++k) {
                runner[aux[k]-97]++;
            }
            for(int k = 0; k < 26; ++k) {
                ans.push_back(runner[k]);
            }
            anagramas.push_back(ans);
            ans.clear();
        }
    }    
}

int main(){
    int n;
    cin>>n;
    while(n--) {
        int ans = 0;
        string s;
        cin>>s;
        countAnagrams(s);
        for(int i = 0; i < anagramas.size(); ++i) {
            
            if(anagramas[i][0] == -1) continue;

            map<char, int> mp;
            
            int cont = 1;

            for(int k = i+1; k < anagramas.size(); ++k) {

                bool isAnagram = true;      
                
                for(int j = 0; j < 26; ++j) {
                    if(anagramas[i][j] != anagramas[k][j]) {
                        isAnagram = false;
                        break;
                    }
                }

                if(isAnagram) {
                    cont++; 
                    anagramas[k][0] = -1;
                }         

            } 
            ans += cont*(cont-1)/2;
        }
        cout<<ans<<endl;
        anagramas.clear();
    }

    return 0;
}