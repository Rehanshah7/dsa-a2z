#include<bits/stdc++.h>
using namespace std;

class PrimeChecker{
    public:
    static bool isPrime(int n){
        if(n < 2){
            return false;
        }

        for (int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
};



int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2; i <= n; i++){
        if(PrimeChecker::isPrime(i)){
            cout << i << " ";
        }
    }

    return 0;
}