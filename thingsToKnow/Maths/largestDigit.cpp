#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largest = INT_MIN;

    while(n > 0){
        int rem = n % 10;
        if(rem > largest){
            largest = rem;
        }
        n = n / 10;
    }

    cout << "Largest digit in a number: " << largest << endl;
    return 0;
}