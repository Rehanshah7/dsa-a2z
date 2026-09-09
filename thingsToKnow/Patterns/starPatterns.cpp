#include<iostream>
using namespace std;

void squareStar(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print the star in each column of the row
}

void triangleStar(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns 
    //    here the number of columns is equal to the row number
    // 3. Print the star in each column of the row
}

void reverseTriangle(int n){
    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows from n to 1 in reverse order
    // 2. Second loop through the number of columns 
    //    here the number of columns is less then to the row number
    // 3. Print the star in each column of the row
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop should print the number of spaces before the star in each row
    //    here the number of space is equal to the row number - i - 1 means (n - i - 1)
    // 3. Third loop should print the number of stars in each row
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

    // pseudo code
    // 1. First loop through the number of rows from n to 1 in reverse order
    // 2. Second loop should print the number of spaces before the star in each row
    //    here the number of space is equal to the row number - i - 1 means (n - i - 1)
    // 3. Third loop should print the number of stars in each row
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop should print the number of spaces before the star in each row
    //    here the number of space is equal to the row number - i - 1 means (n - i - 1)
    // 3. Third loop should print the number of stars in each row
    // 4. First loop through the number of rows from n to 1 in reverse order
    // 5. Second loop should print the number of spaces before the star in each row
    //    here the number of space is equal to the row number - i - 1 means (n - i - 1)
    // 6. Third loop should print the number of stars in each row
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns 
    //    here the number of columns is equal to the row number
    // 3. Print the star in each column of the row
    // 4. First loop through the number of rows from n to 1 in reverse order
    // 5. Second loop through the number of columns 
    //    here the number of columns is less then to the row number
    // 6. Print the star in each column of the row
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print the star with the condtion that it should be printed in first column, last column, first row and last row of the square
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print the star with the condition of when row == column and when row + column == n - 1
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns 
    //    here the number of columns is less then the row number
    // 3. Print the star in first half of the pattern
    // 4. Third loop to print the spaces in the middle of the pattern
    //    here the number of space is equal to the 2 x row number - i - 1 means (n - i - 1) * 2
    // 5. Second loop through the number of columns 
    //    here the number of columns is less then the row number
    // 6. First loop through the number of rows from n to 1 in reverse order
    // 7. Second loop through the number of columns 
    //    here the number of columns is less then the row number
    // 8. Print the star in first half of the pattern
    // 9. Third loop to print the spaces in the middle of the pattern
    //    here the number of space is equal to the 2 x row number - i - 1 means (n - i - 1) * 2
    // 10. Second loop through the number of columns 
    //    here the number of columns is less then the row number
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

    // pseudo code
    // 1. First loop through the number of rows from n to 1 in reverse order
    // 2. Second loop through the number of columns 
    //    here the number of columns is less then the row number
    // 3. Print the star in first half of the pattern
    // 4. Third loop to print the spaces in the middle of the pattern
    //    here the number of space is equal to the 2 x row number - i - 1 means (n - i - 1) * 2
    // 5. Second loop through the number of columns 
    //    here the number of columns is less then the row number
    // 6. First loop through the number of rows
    // 7. Second loop through the number of columns 
    //    here the number of columns is less then the row number
    // 8. Print the star in first half of the pattern
    // 9. Third loop to print the spaces in the middle of the pattern
    //    here the number of space is equal to the 2 x row number - i - 1 means (n - i - 1) * 2
    // 10. Second loop through the number of columns 
    //    here the number of columns is less then the row number
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print the star with the condtion
    //    here row == column and row + column == n - 1 and when row == 0 and row == n - 1 and when column == 0 and column == n - 1
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

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop through the number of columns
    // 3. Print the star based on the condition of when row == n / 2 or column == n / 2
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

    // pseudo code
    // 1. First loop through the number of rows from 1 to 3
    // 2. Second loop through the number of columns from 1 to n
    // 3. Print the star based on the condition
    //    here row + column % 4 == 0 or row == 2 and column % 4 == 0 
}

void hollowDiamondStar(int n){
    for (int i = 0; i < n; i++){
        for (int k = 0; k < n - i - 1; k++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            if(j == 0 || j == i){
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
            if(j == 0 || j == i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // pseudo code
    // 1. First loop through the number of rows
    // 2. Second loop should print the number of spaces before the star in each row
    //    here the number of space is equal to the row number - i - 1. means (n - i - 1)
    // 3. Third loop should print the number of stars in each row
    //    here the condition is that the star should be printed in first column, last column and first row of the triangle. i == 0 || j == 0 || j == i
    // 4. First loop through the number of rows in reverse order from n - 2 to 0
    // 5. Second loop should print the number of spaces before the star in each row
    //    here the number of space is equal to the row number - i - 1. means (n - i - 1)
    // 6. Third loop should print the number of stars in each row
    //    here the condition is that the star should be printed in first column, last column and first row of the triangle. i == 0 || j == 0 || j == i
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
