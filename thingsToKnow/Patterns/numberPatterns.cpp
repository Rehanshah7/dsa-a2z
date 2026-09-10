#include<iostream>
using namespace std;

void numberTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print directly the column as a number in each column of the row
}

void reverseNumberTriangle(int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows from n to 1 in reverse order
    // 2. Second loop through the number of columns
    // 3. Print directly the column as a number in each column of the row
}

void sameNumberTriangle(int n){
    for(int i = 0; i < n; i++){
        int number = i + 1;
        for(int j = 0; j <= i; j++){
            cout << number << " ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print directly the number in each column of the row and number must be equal to the row number + 1
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

    // pseudo code
    // 1. Initialize a variable num to 1
    // 2. First loop through the number of rows
    // 3. Second loop through the number of columns
    // 4. Print directly the number in each column of the row and increment the num in the second loop
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print directly number 0 or number 1 based on the condition
    //    here the condition is when (i + j) % 2 == 0 then print 1 else print 0
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print directly the column as a number in each column of the row
    // 4. Print spaces in between the numbers
    //    here the spaces will be calculated as 2 * (n - i - 1) where n is the total number of rows and i is the current row number
    // 5. Third loop through the number of columns
    // 6. Print directly the column as a number in each column of the row
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print directly the column as a number in each column of the row
    // 4. Print spaces in between the numbers
    //    here the spaces will be calculated as 2 * (n - i - 1) where n is the total number of rows and i is the current row number
    // 5. Third loop through the number of columns
    // 6. Print directly the column as a number in each column of the row
    // 7. First loop through the number of rows from n - 2 to 0 in reverse order
    // 8. Second loop through the number of columns
    // 9. Print directly the column as a number in each column of the row
    // 10. Print spaces in between the numbers
    //    here the spaces will be calculated as 2 * (n - i - 1) where n is the total number of rows and i is the current row number
    // 11. Third loop through the number of columns
    // 12. Print directly the column as a number in each column of the row
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

    // pseudo code
    // 1. First loop through the number of rows from 0 to 2 * n - 1
    // 2. Second loop through the number of columns from 0 to 2 * n - 1
    // 3. Initialize the vairables top = i, left = j, bottom = (2 * n - 2) - i, right = (2 * n - 2) - j
    // 4. Calculate the minimum distance from the four sides means how far I am from the four sides of the matrix and store its minimum value in a variable minDist
    // 5. Print the number as n - minDist
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