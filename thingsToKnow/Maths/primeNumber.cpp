#include<bits/stdc++.h>
using namespace std;

class PrimeChecker{
    public:
    static bool isPrime(int n){
        if(n <= 1){
            return false;
        }
        for (int i = 2; i < sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
            return true;
        }
    }
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(PrimeChecker::isPrime(n)){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

// pseudo code
// 1. Check if the number is less than or equal to 1, if yes then it is not a prime number
// 2. Loop through the numbers from 2 to the sqaure root of the number
// 3. Check if the number is divisible by the loop variable, if yes then it is not a prime number