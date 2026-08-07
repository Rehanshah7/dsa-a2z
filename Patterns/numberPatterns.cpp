#include<iostream>
using namespace std;

void numberTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void reverseNumberTriangle(int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void sameNumberTriangle(int n){
    for(int i = 0; i < n; i++){
        int number = i + 1;
        for(int j = 0; j <= i; j++){
            cout << number << " ";
        }
        cout << endl;
    }
}

void differentNumberTriangle(int n){
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void zeroOneTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if((i + j) % 2 == 0){
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void numberCrownPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 10;
    numberTriangle(n);
    cout << endl;
    reverseNumberTriangle(n);
    cout << endl;
    sameNumberTriangle(n);
    cout << endl;
    differentNumberTriangle(n);
    cout << endl;
    zeroOneTriangle(n);
    cout << endl;
    numberCrownPattern(n);
    return 0;
}