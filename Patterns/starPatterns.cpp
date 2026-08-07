#include<iostream>
using namespace std;

void butterflyPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int k = 0; k < n - i - 1; k++){
            cout << "  ";
        }
        for(int l = 0; l < i; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n - 2; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int k = 0; k < n - i - 1; k++){
            cout << "  ";
        }
        for(int l = 0; l < i; l++){
            cout << "*";
        }
        cout << endl;
    }
}

void hollowDiamond(int n){
    for(int i = n - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int k = 0; k < n - i - 1; k++){
            cout << "  ";
        }
        for(int l = 0; l < i; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int k = 0; k < n - i - 1; k++){
            cout << "  ";
        }
        for(int l = 0; l < i; l++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n = 10;
    butterflyPattern(n);
    cout << endl;
    hollowDiamond(n);
    return 0;
}