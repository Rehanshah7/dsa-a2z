#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool perfect = false;
    int sum = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }

    if(sum == n){
        perfect = true;
        cout << "A number is perfect number" << endl;
    } else {
        perfect = false;
        cout << "A number is not a perfect number" << endl;
    }

    return 0;
}