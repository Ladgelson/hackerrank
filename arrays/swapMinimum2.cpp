#include <bits/stdc++.h>
using namespace std;
#define MAX 100010

int n;
int adj[MAX];
int visit[MAX];
int swaps = 0;

void dfs(int v) {
    visit[v] = 1;
    if(visit[adj[v]] == 1){
        return;
    }
    swaps++;
    dfs(adj[v]);
}

void swapMin(){
    for(int i = 0; i < n; ++i) {
        if(visit[i] == -1) dfs(i);
    }
    cout<<swaps<<endl;
}

int main(){
    memset(visit, -1, sizeof visit);
    cin >> n;
    for(int i=0;i<n;++i){
        int lul;
        cin>>lul;
        adj[i] = lul-1;
    }
    swapMin();
    return 0;
}

