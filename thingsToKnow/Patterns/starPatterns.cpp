#include<iostream>
using namespace std;

void squareStar(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void triangleStar(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void reverseTriangle(int n){
    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pyramidStar(int n){
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n - i - 1; k++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedPyramidStar(int n){
    for (int i = n; i > 0; i--){
        for (int k = 0; k <= n - i - 1; k++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void diamondStar(int n){
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n - i - 1; k++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n-1; i > 0; i--){
        for (int k = 0; k <= n - i - 1; k++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void halfDiamondStar(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void hollowSquareStar(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void symetricVoidPattern(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j || i + j == n - 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

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

void diagonalPattern(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j || i + j == n - 1 || i == 0 || i == n - 1 || j == 0 || j == n - 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void plusPattern(int n){
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= n; j++){
            if(i == n/2 || j == (n/2)){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void zigzagPattern(int n){
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= n; j++){
            if((i + j) % 4 == 0 || (i == 2) && (j % 4 == 0)){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void hollowDiamondStar(int n){
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n - i - 1; k++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            if(i == 0 || j == 0 || j == i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--){
        for (int k = 0; k < n - i - 1; k++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main(){
    int num = 10;
    butterflyPattern(num);
    cout << endl;
    hollowDiamond(num);
    cout << endl;
    squareStar(num);
    cout << endl;
    triangleStar(num);
    cout << endl;
    reverseTriangle(num);
    cout << endl;
    pyramidStar(num);
    cout << endl;
    invertedPyramidStar(num);
    cout << endl;
    diamondStar(num);
    cout << endl;
    halfDiamondStar(num);
    cout << endl;
    hollowSquareStar(num);
    cout << endl;
    symetricVoidPattern(num);
    cout << endl;
    diagonalPattern(num);
    cout << endl;
    plusPattern(num);
    cout << endl;
    zigzagPattern(num);
    cout << endl;
    hollowDiamondStar(num);
    return 0;
}
