#include<bits/stdc++.h>
using namespace std;

vector<int> allDivisors(int n){
    vector<int> divisors;

    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors = allDivisors(n);
    cout << "The divisors of " << n << " are: ";
    for(int divisor : divisors){
        cout << divisor << " ";
    }

    return 0;
}