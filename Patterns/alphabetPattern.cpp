#include<iostream>
using namespace std;

void alphabetTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

void reverseAlphabetTriangle(int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

void sameRowAlphabetTriangle(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void alphabetHillTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n - i - 1; k++){
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for(int j = 0; j < 2 * i + 1; j++){
            cout << ch << " ";

            if(j < breakpoint){
                ch++;
            } else {
                ch--;
            }
        }
        for(int k = 0; k < n - i - 1; k++){
            cout << " ";
        }
        cout << endl;
    }
}

void alphaTraingle(int n){
    for(int i = 0; i < n; i++){
        for (char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++) {
                cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 10;
    alphabetTriangle(n);
    cout << endl;
    reverseAlphabetTriangle(n);
    cout << endl;
    sameRowAlphabetTriangle(n);
    cout << endl;
    alphabetHillTriangle(n);
    cout << endl;
    alphaTraingle(n);
    return 0;
}