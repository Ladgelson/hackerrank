#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> a;
    a[1]=2;
    a[2]=2;
    a[3]=2;
    cout << a.size() << endl;

    for(auto x : a) cout<<x<<endl;

    return 0;
}