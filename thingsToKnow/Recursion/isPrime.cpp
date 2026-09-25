#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void checkPrime(int n, bool &isPrime){
        if(n <= 1){
            return;
        }

        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                isPrime = false;
                return;
            }
        }
    }
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    Solution::checkPrime(n, isPrime);
    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else{
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}