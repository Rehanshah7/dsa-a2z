#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;

    while(n > 0){
        int rem = n % 10;
        if(rem % 2 != 0){
            count++;
        }
        n = n / 10;
    }

    cout << "count of odd digits: " << count << endl;
    return 0;
}