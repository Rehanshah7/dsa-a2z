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