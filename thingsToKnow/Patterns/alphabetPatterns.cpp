#include<iostream>
using namespace std;

void alphabetTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print directly the column as a number in each column of the row by adding it to the ASCII value of 'A' to get the corresponding alphabet character
}

void reverseAlphabetTriangle(int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows from n to 1 in reverse order
    // 2. Second loop through the number of columns
    // 3. Print directly the column as a number in each column of the row by adding it to the ASCII value of 'A' to get the corresponding alphabet character
}

void sameRowAlphabetTriangle(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print directly the row as a number in each column of the row by adding it to the ASCII value of 'A' in each iteration of row to get the corresponding alphabet character
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop to print the spaces before the characters in each row. (n - i - 1)
    // 3. Take a variable 'ch' and initialize it to 'A' and a variable 'breakpoint' and initialize it to '(2 * i + 1) / 2'
    // 4. Third loop to print the characters in each row. (2 * i + 1)
    //    here if the current index of the loop is less than the breakpoint then increment the 'ch' by 1 else decrement the 'ch' by 1
    // 5. Fourth loop to print the spaces after the characters in each row. (n - i - 1)
}

void alphaTraingle(int n){
    for(int i = 0; i < n; i++){
        for (char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++) {
                cout << ch << " ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop starts from first character of the row to the last character of the row
    //    here the last character of the row is ('A' + n - 1) and the first character of the row is ('A' + n - 1) - i
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