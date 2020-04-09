#include <bits/stdc++.h>
using namespace std;
#define MAX 100010

int n;

typedef struct player{
    int score;
    string nome;
} Player;

bool compare(Player a, Player b){
    if(a.score == b.score){
        return a.nome < b.nome;
    }
    return a.score > b.score;
}

Player arr[MAX];

int main(){
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> arr[i].nome >> arr[i].score;
    }
    sort(arr, arr+n, compare);
    for(int i=0;i<n;++i){
        cout << arr[i].nome << " " << arr[i].score << endl;
    }
    return 0;
}