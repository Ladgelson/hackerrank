#include <bits/stdc++.h>
using namespace std;

int arr[6][6];

int sum(int i, int j){
    int aux = 0;
    for(int k=0;k<3;k++){
        aux+=arr[i-1][(j-1)+k];
        aux+=arr[i+1][(j-1)+k];
    }
    aux+=arr[i][j];
    return aux;
}

int hourglassSum(){
    int max = -1;
    int first = 1;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(i > 0 && i < 5 && j > 0 && j < 5){
                if(first){
                    max = sum(i,j);
                    first--;
                } else {
                    int aux = sum(i,j); 
                    if(aux > max)max = aux;
                }
            } 
        }
    }
    return max;
}

int main(){
    for(int i=0;i<6;++i){
        for(int j=0;j<6;++j){
            cin >> arr[i][j];
        }
    }
    cout << hourglassSum() << endl;
    return 0;
}