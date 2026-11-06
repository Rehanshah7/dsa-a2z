#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a number in a string: ";
    cin >> str;

    int largest = 0;

    for(int i = str.length() - 1; i >= 0; i--){
        if(((str[i] - '0') % 2 != 0) && ((str[i] - '0') > largest)){
            largest = int(str[i] - '0');
        }
    }
    cout << endl;

    cout << largest << endl;
    
    return 0;
}

// pseudo code
// 1. Take a numbar input in the form of string
// 2. Currently the largest number is 0
// 3. Traverse through the each indices in the loop
// 4. Put a condition of each indices should be substract with '0' so that actual integer can be the answer and modulus with 2 to check whether the number is even or odd
//    Number should be odd and also it should be more then the largest value
//    If this condition staisfy then int(str[i] - '0') should be store in the largest and prints the largest value