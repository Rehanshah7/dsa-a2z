#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            divisors.push_back(i);
        }
    }

    for(auto x : divisors){
        cout << x << " ";
    }
    return 0;
}