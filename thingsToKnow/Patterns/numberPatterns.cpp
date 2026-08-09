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
        for (int k = 0; k < 2 * (n - i - 1); k++){
            cout << "  ";
        }
        for(int l = 0; l <= i; l++){
            cout << l << " ";
        }
            cout << endl;
    }
}

void numberButterflyPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j << " ";
        }
        for (int k = 0; k < 2 * (n - i - 1); k++){
            cout << "  ";
        }
        for(int l = 0; l <= i; l++){
            cout << l << " ";
        }
            cout << endl;
    }
    for(int i = n - 2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            cout << j << " ";
        }
        for (int k = 0; k < 2 * (n - i - 1); k++){
            cout << "  ";
        }
        for(int l = 0; l <= i; l++){
            cout << l << " ";
        }
            cout << endl;
    }
}

void matrixPattern(int n){
    for (int i = 0; i < 2 * n - 1; i++){
        for (int j = 0; j < 2 * n - 1; j++){
            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;
            int minDist = min(min(top, bottom), min(left, right));
            cout << n - minDist << " "; 
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
    cout << endl;
    numberButterflyPattern(n);
    cout << endl;
    matrixPattern(4);
    return 0;
}